/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:30:32 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/23 15:31:13 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	convert_size(int nbr, int bl)
{
	int	size;

	size = 0;
	if (nbr <= 0)
		size++;
	while (nbr != 0)
	{
		size++;
		nbr = nbr / bl;
	}
	return (size);
}

char	*int_to_base(long nbr, char *base, int bl, char *result)
{
	int	size;
	int	i;

	size = convert_size(nbr, bl);
	i = size;
	if (nbr == 0)
		result[0] = base[nbr % bl];
	while (nbr != 0 && size >= 0)
	{
		if (nbr < 0)
		{
			result[0] = '-';
			nbr = -nbr;
		}
		result[size - 1] = base[nbr % bl];
		nbr = (nbr / bl);
		size--;
	}
	result[i] = 0;
	return (result);
}
