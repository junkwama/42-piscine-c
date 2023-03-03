/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:17:23 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/02 23:38:54 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	_min;
	int	range;
	int	*arr;

	i = 0;
	_min = min;
	range = max - min;
	if (range > 0)
	{
		arr = (int *)malloc(range * 4);
		while (_min < max)
			arr[i++] = _min++;
	}
	return (arr);
}
