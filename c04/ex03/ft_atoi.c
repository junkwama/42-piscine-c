/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:43:17 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/24 03:44:19 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_lst_digit(char *str)
{
	int	i;
	int	lst_dg_pos;

	i = 0;
	lst_dg_pos = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if (str[i] != '+' && str[i] != '-' && str[i] != ' ')
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				lst_dg_pos = i - 1;
				break ;
			}
		}
		i++;
	}
	return (lst_dg_pos);
}

int	ft_fst_digit(char *str)
{
	int	i;
	int	lst_dg_pos;
	int	fst_dg_pos;

	i = 0;
	lst_dg_pos = ft_lst_digit(str);
	fst_dg_pos = -1;
	while (i <= lst_dg_pos)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			fst_dg_pos = i;
			break ;
		}
		i++;
	}
	return (fst_dg_pos);
}

int	ft_sign(char *str)
{
	int	i;
	int	fst_dg_pos;
	int	minus_nbr;

	i = 0;
	minus_nbr = 0;
	fst_dg_pos = ft_fst_digit(str);
	while (i < fst_dg_pos)
	{
		if (str[i] >= '-')
		{
			minus_nbr++;
		}
		i++;
	}
	if (minus_nbr % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	lst_dg_pos;

	i = ft_fst_digit(str);
	lst_dg_pos = ft_lst_digit(str);
	nbr = 0;
	while (i <= lst_dg_pos)
	{
		nbr = (nbr * 10) + ((int)str[i] - 48);
		i++;
	}
	return (nbr * ft_sign(str));
}
