/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:35:28 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/02 19:35:33 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_rev_if_needed(int i, int j, int k, char *tab[])
{
	char	*helper;

	if (tab[i][k] > tab[j][k])
	{
		helper = tab[i];
		tab[i] = tab[j];
		tab[j] = helper;
	}
	else if ((tab[i][k] == tab[j][k]) && (tab[i][k + 1] || tab[j][k + 1]))
		ft_rev_if_needed(i, j, ++k, tab);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			ft_rev_if_needed(i, j, 0, argv);
			j++;
		}
		ft_print_str(argv[i]);
		ft_print_str("\n");
		i++;
	}
	return (0);
}
