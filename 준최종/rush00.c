/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giykim <giykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:16:25 by giykim            #+#    #+#             */
/*   Updated: 2022/02/05 11:43:22 by giykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);
void	print_line(int	length, char	start, char	middle, char	end);

void	rush(int	x, int	y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < y && col < x)
	{
		if ((row == 0) || (row == y - 1))
		{
			print_line(x, 'o', '-', 'o');
		}
		else
		{
			print_line(x, '|', ' ', '|');
		}
		row++;
	}
}

void	print_line(int	length, char	start, char	middle, char	end)
{
	int	temp;

	temp = length;
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
