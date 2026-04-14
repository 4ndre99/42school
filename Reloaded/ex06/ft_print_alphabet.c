/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:38:40 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 20:40:52 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
		ft_putchar(a++);
}

int main()
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return 0;
}