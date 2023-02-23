/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:50:58 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/23 16:51:52 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_len;
	int	src_has_ended;

	i = 0;
	src_has_ended = 0;
	d_len = ft_strlen(dest);
	while (src_has_ended == 0)
	{
		dest[d_len] = src[i];
		if (src[i] == '\0')
		{
			src_has_ended = 1;
		}
		i++;
		d_len++;
	}
	return (dest);
}
