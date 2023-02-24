/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:54 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/24 00:57:51 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_reverse_number(int n)
{
	int	given_number;
	int	output;
	int	to_add;

	given_number = n;
	output = 0;
	while (given_number > 0)
	{
		to_add = given_number % 10;
		output = (output * 10) + to_add;
		given_number = given_number / 10;
	}
	{
		return (output);
	}
}

void	ft_print(int n, int sign)
{
	int	nbr;
	int	to_print;

	nbr = n;
	if (sign == -1)
	{
		ft_putchar('-');
	}
	while (nbr > 0)
	{
		to_print = nbr % 10;
		ft_putchar(48 + to_print);
		nbr = nbr / 10;
	}
}

void	ft_putnbr(int n)
{
	int	reversed_number;
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
	}
	reversed_number = ft_reverse_number(n * sign);
	if (reversed_number == 0)
	{
		ft_putchar(48);
	}
	else
	{
		ft_print(reversed_number, sign);
	}
}
