/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:30:58 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/24 09:39:19 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rot_13(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return ((char)(((((int) c - 97) + 13) % 26) + 97));
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return ((char)(((((int) c - 65) + 13) % 26) + 65));
	}
	else
	{
		return (c);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	char	*str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i] != '\0')
		{
			ft_putchar(rot_13(str[i]));
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
