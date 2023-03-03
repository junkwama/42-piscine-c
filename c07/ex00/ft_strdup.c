/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:40:48 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 01:55:52 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[++i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*s2;
	int		str_len;

	str_len = ft_str_len(src) + 1;
	s2 = malloc(str_len);
	ft_strcpy(s2, src);
	return (s2);
}
