/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:12:36 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:47:54 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	long	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	check(char *base)
{
	long	i;
	long	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	a;
	long	nnbr;

	nnbr = (long)nbr;
	if (check(base) > 0)
		return ;
	if (str_len(base) <= 1)
		return ;
	if (nnbr < 0)
	{
		write (1, "-", 1);
		nnbr = -nnbr;
	}
	if (nnbr >= str_len(base))
		ft_putnbr_base(nnbr / str_len(base), base);
	a = base[nnbr % str_len(base)];
	write (1, &a, 1);
}
