/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakyoung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:21:32 by nakyoung          #+#    #+#             */
/*   Updated: 2022/02/03 16:35:31 by nakyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	al;

	al = 'z';
	while (al >= 'a')
	{
		ft_putchar(al);
		al--;
	}
}
