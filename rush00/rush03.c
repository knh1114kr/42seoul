/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giykim <giykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:16:25 by giykim            #+#    #+#             */
/*   Updated: 2022/02/05 15:17:34 by giykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);
void	print_line(int	length, char	start, char	middle, char	end);

void	rush(int	x, int	y)
{
	int	row;

	row = 0;
	while (row < y && 0 < x)
	{
		if ((row == 0) || (row == y - 1))
		{
			print_line(x, 'A', 'B', 'C');
		}
		else
		{
			print_line(x, 'B', ' ', 'B');
		}
		row++;
	}
}

void	print_line(int	length, char	start, char	middle, char	end)
{
	int	temp;

	temp = length - 1;
	ft_putchar(start);
	while (temp > 1)
	{
		ft_putchar(middle);
		temp--;
	}
	if (length != 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}
