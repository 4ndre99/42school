/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:10:23 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/09 12:35:08 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		write (1, &str[n], 1);
		n++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 1;
	if (argc > 1)
	{
		while (argv[n])
		{
			ft_putstr(argv[n]);
			write (1, "\n", 1);
			n++;
		}
	}
	return (0);
}
