/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:02:16 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 09:02:20 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_white_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\f'
		|| c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	n = 0;
	while (is_white_space(str[i]) == 1)
		i++;
	if (str[0] == '-' || str[i] == '+')
	{
		i++;
		if (str[0] == '-')
		sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + ((int)str[i] - 48);
		i++;
	}
	return (n * sign);
}
