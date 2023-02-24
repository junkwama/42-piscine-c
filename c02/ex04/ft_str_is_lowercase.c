/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:54:31 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/21 02:02:52 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;
	int	ret_val;

	ret_val = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = (int)(*(str + i));
		if (!((c >= 97) && (c <= 122)))
		{
			ret_val = 0;
			break ;
		}
		i++;
	}
	return (ret_val);
}