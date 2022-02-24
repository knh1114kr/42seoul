/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:35:31 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/20 16:19:54 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		write(1, c, 1);
		c++;
	}
	write(1, "\n", 1);
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_tab(av, ac);
	while (i <= ac - 1)
		ft_putstr(av[i++]);
	return (0);
}
