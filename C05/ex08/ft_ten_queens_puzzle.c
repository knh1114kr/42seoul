/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:36:21 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/21 15:32:02 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}

void	ft_print(char *tab, int nbq, int *count)
{
	int	i;
	int	j;

	if (nbq == 10)
	{
		nbq = 0;
		while (nbq < 10)
			ft_putchar(tab[nbq++] + '0');
		ft_putchar('\n');
		(*count)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		j = 0;
		while (j < nbq && i != tab[j] && ft_abs(tab[j] - i) != nbq - j)
			j++;
		if (j >= nbq)
		{
			tab[nbq] = i;
			ft_print(tab, nbq + 1, count);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		nbq;
	char	tab[10];
	int		count;

	nbq = 0;
	count = 0;
	ft_print(tab, nbq, &count);
	return (count);
}
