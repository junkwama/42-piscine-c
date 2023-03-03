/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:30:42 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 10:30:47 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	_start;
	int	range;
	int	*arr;

	i = 0;
	_start = start;
	range = end - start;
	if (range < 0)
		range *= -1;
	range++;
	arr = (int *)malloc(range * 4);
	while (i < range)
	{
		if (end - start >= 0)
			arr[i++] = _start++;
		else
			arr[i++] = _start--;
	}
	return (arr);
}
