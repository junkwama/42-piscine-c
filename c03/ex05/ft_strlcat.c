/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:05:31 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/23 20:08:11 by junkwama         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	d_len;
	int	ret_size;
	int	n;

	i = 0;
	ret_size = ft_strlen(dest) + ft_strlen(src);
	n = size - ft_strlen(dest) - 1;
	d_len = ft_strlen(dest);
	while (i < n)
	{
		dest[d_len] = src[i];
		i++;
		d_len++;
	}
	dest[++d_len] = '\0';
	return (ret_size);
}
