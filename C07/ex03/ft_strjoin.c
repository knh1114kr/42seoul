/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:12:37 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/23 17:53:52 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strs_len(char **strs, int size)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

void	save_str(char *s, char **strs, char *sep, int size)
{
	int	a;
	int	j;
	int	index;

	a = 0;
	index = 0;
	while (a < size)
	{
		j = 0;
		while (strs[a][j])
		{
			s[index] = strs[a][j];
			index++;
			j++;
		}
		j = 0;
		while (sep[j] && a != size - 1)
		{
			s[index] = sep[j];
			index++;
			j++;
		}
		a++;
	}
	s[index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*str;

	len = ft_strlen(sep) * (size - 1) + strs_len(strs, size);
	if (size == 0)
	{
		str = malloc(1);
		return (str);
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	save_str(str, strs, sep, size);
	return (str);
}
