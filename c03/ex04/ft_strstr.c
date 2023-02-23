/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:21:06 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/23 19:26:43 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(char *str1, char *str2, int n)
{
	int	are_equal;
	int	i;

	i = 0;
	are_equal = 1;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			are_equal = 0;
			break ;
		}
		i++;
	}
	return (are_equal);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	int	occ_i;
	int	i;

	i = 0;
	occ_i = -1;
	if (ft_strlen(to_find) == 0)
	{
		return (str);
	}
	while (i <= (ft_strlen(str) - ft_strlen(to_find)))
	{
		if (cmp((str + i), to_find, ft_strlen(to_find)) == 1)
		{
			occ_i = i;
		}
		i++;
	}
	if (occ_i == -1)
	{
		return (0);
	}
	return (str + occ_i);
}
