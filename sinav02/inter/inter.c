/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 08:04:58 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 08:09:44 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_str(char *str, char c, int ls_chr)
{
	int	i;

	i = 0;
	while (str[i] && ((ls_chr != -1 && i < ls_chr) || (ls_chr == -1)))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*s1;
	char	*s2;

	if (argc == 3)
	{	
		i = 0;
		s1 = argv[1];
		s2 = argv[2];
		while (s1[i])
		{
			if (is_in_str(s1, s1[i], i) == 0 && is_in_str(s2, s1[i], -1) == 1)
				write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
