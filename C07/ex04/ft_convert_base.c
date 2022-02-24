/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:29:47 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/23 15:31:06 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		base_printable(char	*base);
int		convert_size(int nbr, int bl);
char	*int_to_base(long nbr, char *base, int bl, char *result);

int	base_check(char *base)
{
	int	bl;
	int	i;

	bl = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[bl])
	{
		if (base[bl] == '+' || base[bl] == '-' || base[bl] == ' '
			 || base[bl] == '\n' || base[bl] == '\t' || base[bl] == '\v'
			 || base[bl] == '\f' || base[bl] == '\r')
			return (0);
		i = bl + 1;
		while (base[i])
		{
			if (base[i] == base[bl])
				return (0);
			i++;
		}
		bl++;
	}
	return (1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	base_num(char n, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (n == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_to_int(char *str, char *base, int bl)
{
	int	j;
	int	buho;
	int	result;

	j = 0;
	buho = 1;
	result = 0;
	while (str[j] && (str[j] == ' ' || str[j] == '\n' || str[j] == '\t'
			 || str[j] == '\v' || str[j] == '\f' || str[j] == '\r'))
		j++;
	while (str[j] && (str[j] == '+' || str[j] == '-'))
	{
		if (str[j] == '-')
			buho = buho * (-1);
		j++;
	}
	while (str[j] && base_num(str[j], base) >= 0)
	{
		result = result * bl + base_num(str[j], base);
		j++;
	}
	return (buho * result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		fl;
	int		tl;
	int		num;
	int		size;
	char	*result;

	if (base_check(base_from) == 0 || base_check(base_to) == 0)
		return (0);
	fl = base_len(base_from);
	tl = base_len(base_to);
	num = base_to_int(nbr, base_from, fl);
	size = convert_size(num, tl);
	result = malloc(sizeof(char) * (size + 1));
	result = int_to_base(num, base_to, tl, result);
	return (result);
}
