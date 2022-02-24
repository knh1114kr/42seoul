/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:25 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/06 17:18:19 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	while (c < 99)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_putchar (c / 10 + 48, c % 10 + 48);
			write(1, " ", 1);
			ft_putchar(d / 10 + 48, d % 10 + 48);
			if (c != 98)
			{
				write(1, ", ", 2);
			}
			d++;
		}
		c++;
	}
}
