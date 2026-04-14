/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:52:09 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 20:39:13 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
		ft_putchar(a++);
}

int main()
{
	ft_print_numbers();
	write(1, "\n", 1);
	return 0;
}