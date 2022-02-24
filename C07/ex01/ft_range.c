/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:06:31 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/22 18:48:58 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (NULL);
	while (min < max)
		dest[i++] = min++;
	return (dest);
}
