/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:25:28 by junkwama          #+#    #+#             */
/*   Updated: 2023/03/03 02:15:52 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_unsafe_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	j = ft_str_len(dest);
	i = 0;
	while (src[i] != '\0')
		dest[j++] = src[i++];
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		output_size;
	int		i;

	i = 0;
	if (size <= 0)
	{
		output = (char *)malloc(1);
		*output = '\n';
	}
	else
		output_size = (ft_str_len(sep) * (size - 1)) + 1;
	while (i < size)
		output_size += ft_str_len(strs[i++]);
	output = (char *)malloc(output_size);
	while (i < size)
	{
		ft_unsafe_strcpy(output, strs[i++]);
		if (i != size)
			ft_unsafe_strcpy(output, sep);
	}
	output[output_size - 1] = '\n';
	return (output);
}
