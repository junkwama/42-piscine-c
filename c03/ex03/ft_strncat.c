/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:12:02 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/23 17:12:05 by junkwama         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	d_len;
	int	n;

	i = 0;
	n = nb;
	d_len = ft_strlen(dest);
	while (i < n)
	{
		dest[d_len] = src[i];
		i++;
		d_len++;
	}
	dest[++d_len] = '\0';
	return (dest);
}
