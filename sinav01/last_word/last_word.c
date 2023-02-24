/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:27:55 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/24 11:35:43 by junkwama         ###   ########.fr       */
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

int	ft_lw_lst_chr_pos(char *str)
{
	int	ls_pos;

	ls_pos = ft_strlen(str) - 1;
	while (ls_pos >= 0)
	{
		if ((int)str[ls_pos] != 32 && (int)str[ls_pos] != 9)
		{
			break ;
		}
		ls_pos--;
	}
	return (ls_pos);
}

int	ft_lw_fst_chr_pos(char *str)
{
	int	fs_pos;

	fs_pos = ft_lw_lst_chr_pos(str);
	while (fs_pos >= 0)
	{
		if ((int)str[fs_pos] == 32 || (int)str[fs_pos] == 9)
		{
			break ;
		}
		fs_pos--;
	}
	return (fs_pos + 1);
}

void	ft_last_word(char *str)
{
	int	fw;
	int	lw;

	fw = ft_lw_fst_chr_pos(str);
	lw = ft_lw_lst_chr_pos(str);
	while (fw <= lw)
	{
		write(1, &str[fw], 1);
		fw++;
	}
}

int	main(int argc, char *argv[])
{
	char	bsp;

	bsp = '\n';
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	write(1, &bsp, 1);
	return (0);
}
