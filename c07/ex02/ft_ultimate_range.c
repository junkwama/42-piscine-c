/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:55:45 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 00:57:57 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	_min;
	int	range_size;
	int	*arr;

	i = 0;
	_min = min;
	range_size = max - min;
	if (range_size > 0)
	{
		arr = (int *)malloc(range_size * 4);
		if (!arr)
			return (-1);
		*range = arr;
		while (_min < max)
			arr[i++] = _min++;
		return (range_size);
	}
	else
	{
		*range = 0;
		return (0);
	}
}
