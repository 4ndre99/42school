/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:29:29 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/09 12:35:37 by ade-arau         ###   ########.fr       */
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

	n = argc - 1;
	while (n > 0)
	{
		ft_putstr(argv[n]);
		write (1, "\n", 1);
		n--;
	}
	return (0);
}
