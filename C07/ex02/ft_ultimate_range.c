/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:50:08 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/23 17:52:23 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			dest[i] = min + i;
		*range = dest;
		return (i);
	}
}
