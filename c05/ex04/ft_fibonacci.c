/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:39:30 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/28 14:40:56 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_next(int i1, int i2, int idx)
{
	if (idx == 0)
		return (0);
	if (idx == 1)
		return (i2);
	if (idx > 1)
		ft_next(i2, i1 + i2, --idx);
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else
		return (ft_next(0, 1, index));
}
