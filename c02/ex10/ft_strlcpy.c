/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:04:36 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/21 07:41:12 by junkwama         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_has_ended;
	int	len;
	int	i;

	i = 0;
	len = size - 1;
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
	*(dest + (size - 1)) = '\0';
	return (ft_strlen(src));
}
