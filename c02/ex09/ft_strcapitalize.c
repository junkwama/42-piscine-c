/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 06:32:17 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/21 06:52:01 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alphanum(char *str, int n)
{
	int	c;
	int	ret_val;

	ret_val = 1;
	c = (int)(*(str + n));
	if (!(((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122))))
	{
		ret_val = 0;
	}
	if ((c >= 48) && (c <= 57))
	{
		ret_val = 1;
	}
	return (ret_val);
}

char	*ft_strlowcase(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = (int)(*(str + i));
		if ((c >= 65) && (c <= 90))
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str, int pos)
{
	int	c;

	c = (int)(*(str + pos));
	if ((c >= 97) && (c <= 122))
	{
		*(str + pos) = *(str + pos) - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	ft_strlowcase(str);
	ft_strupcase(str, 0);
	while (*(str + i) != '\0')
	{
		is_alpha = ft_str_is_alphanum(str, i);
		if (is_alpha == 0)
		{
			ft_strupcase(str, i + 1);
		}
		i++;
	}
	return (str);
}
