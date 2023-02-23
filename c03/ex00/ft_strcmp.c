/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:37:25 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/23 15:37:31 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	return_val;

	return_val = 0;
	i = 0;
	while (1)
	{
		if (s1[i] > s2[i])
		{
			return_val = 1;
			break ;
		}
		else if (s1[i] < s2[i])
		{
			return_val = -1;
			break ;
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (return_val);
}
