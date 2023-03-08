/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:36:35 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/08 09:36:38 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*runner;

	runner = dest;
	while (*src)
		*runner++ = *src++;
	*runner = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = (char *) malloc((ft_strlen(src) + 1) * sizeof (char));
	if (! dup)
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stocked_string;

	stocked_string = (t_stock_str *) malloc((ac + 1) * sizeof (t_stock_str));
	if (!stocked_string)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stocked_string[i].size = ft_strlen(av[i]);
		stocked_string[i].str = av[i];
		stocked_string[i].copy = ft_strdup(av[i]);
		i++;
	}
	stocked_string[i].str = 0;
	return (stocked_string);
}
