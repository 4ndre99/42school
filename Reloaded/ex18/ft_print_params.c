/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:45:48 by ade-arau          #+#    #+#             */
/*   Updated: 2026/03/16 16:11:35 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i;

		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}