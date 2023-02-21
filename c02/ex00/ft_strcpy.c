/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:46:18 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/20 21:26:42 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	should_cpy;
	int	i;

	should_cpy = 1;
	i = 0;
	while (should_cpy == 1)
	{
		*(dest + i) = *(src + i);
		if (*src == '\0')
		{
			should_cpy = 0;
		}
		i++;
	}
	return (dest);
}
