/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:09:54 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/21 15:33:51 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (n > n * nb)
		return (0);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (n * ft_recursive_power(n, power - 1));
	else
		return (n);
}
