/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:01:45 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/23 16:12:06 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	ret;
	int	len;
	int	i;

	ret = 0;
	i = 0;
	len = n;
	while (i < len)
	{
		if (s1[i] > s2[i])
		{
			ret = 1;
		}
		else if (s1[i] < s2[i])
		{
			ret = -1;
		}
		if (s1[i] == '\0' || s2[i] == '\0' || ret != 0)
		{
			break ;
		}
		i++;
	}
	return (ret);
}	
