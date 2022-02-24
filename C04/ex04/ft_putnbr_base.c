/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:31:23 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/20 13:07:45 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base, int b_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < b_len)
	{
		j = i + 1;
		while (j < b_len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '-')
			return (1);
		if (base[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_print(char	*base, unsigned int nbr)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (nbr > len - 1)
		ft_print(base, nbr / len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	b_len;

	b_len = ft_strlen(base);
	if (b_len <= 1 || ft_check_base(base, b_len))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_print(base, -nbr);
	}
	else
		ft_print(base, nbr);
}
