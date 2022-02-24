/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:27:22 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/06 17:13:58 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	combA;
	char	combB;
	char	combC;

	combA = '0';
	while (combA <= '7')
	{
		combB = combA + 1;
		while (combB <= '8')
		{
			combC = combB + 1;
			while (combC <= '9')
			{
				ft_putchar(combA, combB, combC);
				combC++;
			}
			combB++;
		}
		combA++;
	}
}
