/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:24:18 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/24 12:25:29 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*my_array;
	int	ar_size;
	int	st;

	st = start;
	i = 0;
	ar_size = (end - start) + 1;
	my_array = (int *)malloc(ar_size * 4);
	while (st <= end)
	{
		my_array[i] = st++;
		i++;
	}	
	return (my_array);
}
