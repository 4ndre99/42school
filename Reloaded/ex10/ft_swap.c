/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:58:03 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 21:24:23 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int	a = 1;
	int b = 3;

	puts("For a = 1 & b = 3:");
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}