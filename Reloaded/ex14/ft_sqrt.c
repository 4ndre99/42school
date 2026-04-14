/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:58:00 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 23:20:19 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>

int compare(int nb, int i)
{
	if ((i * i) == nb)
		return (i);
	if ((i * i) > nb)
		return (0);
	return (compare(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 1)
		return (0);
	return compare(nb, 1);
}

int main()
{
	setlocale(LC_ALL, "");
	int a = 0;
	printf("\u221A%d = %d\n", a, ft_sqrt(a));
	return 0;
}