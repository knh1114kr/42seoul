/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giykim <giykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:17:29 by giykim            #+#    #+#             */
/*   Updated: 2022/02/05 11:56:57 by giykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	rush(int	x, int	y);

int	main(void)
{
	rush(0, 0);
	write(1, "\n", 1);
	rush(5, 0);
	write(1, "\n", 1);
	rush(0, 1);
	write(1, "\n", 1);
	rush(-1, 5);
	write(1, "\n", 1);
	rush(4, -4);
	write(1, "\n", 1);
	rush(-4, -4);
	write(1, "\n", 1);
	rush(0, -4);
	write(1, "\n", 1);
	rush(-1, 0);
	write(1, "\n", 1);
	rush(10, 14);
	write(1, "\n", 1);
	rush(100, 100);
	write(1, "\n", 1);
	return (0);
}
