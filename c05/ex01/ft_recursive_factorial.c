/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:33:01 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/28 11:33:17 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb >= 1)
		return (nb * ft_iterative_factorial(nb - 1));
	else
		return (1);
}
