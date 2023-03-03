/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 04:45:27 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 04:46:46 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] != '\t' && argv[1][i] != ' ')
			{
				j = i;
				while (argv[1][j] && argv[1][j] != '\t' && argv[1][j] != ' ')
				{
					write(1, &argv[1][j], 1);
					j++;
				}
				break ;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
