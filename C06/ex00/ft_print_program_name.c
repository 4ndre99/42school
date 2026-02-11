/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:46:00 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/09 12:34:28 by ade-arau         ###   ########.fr       */
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

int	main(int argc, char	*argv[])
{
	int	n;

	n = 0;
	if (argc > 0)
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
