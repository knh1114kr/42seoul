/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:29:35 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/20 15:22:25 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 0)
	{
		while (av[0][i] != '\0')
		{
			write(1, &av[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
