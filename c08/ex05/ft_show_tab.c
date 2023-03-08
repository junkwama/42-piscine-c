/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:36:52 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/08 09:44:19 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	number[12];
	int		i;
	int		int_min_detected;

	int_min_detected = 0;
	if (nb - 1 > nb)
	{
		nb += 1;
		int_min_detected = 1;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	i = 0;
	while (nb > 9)
	{
		number[i++] = '0' + nb % 10;
		nb /= 10;
	}
	number[i] = '0' + nb;
	number[0] += int_min_detected;
	while (i >= 0)
		write(1, &number[i--], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
