/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:05:54 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/18 09:06:06 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_if_needed(int i, int j, int *tab)
{
	int	helper;

	if (*(tab + i) > *(tab + j))
	{
		helper = *(tab + i);
		*(tab + i) = *(tab + j);
		*(tab + j) = helper;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	helper;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			ft_rev_if_needed(i, j, tab);
			j++;
		}
		i++;
	}
}
