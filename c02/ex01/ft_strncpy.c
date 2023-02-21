/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:55:47 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/21 00:00:17 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	src_has_ended;
	int	len;
	int	i;

	i = 0;
	len = n;
	while (i < len)
	{
		if (src_has_ended == 0)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
		if (*src == '\0')
		{
			src_has_ended = 1;
		}
		i++;
	}
	return (dest);
}
