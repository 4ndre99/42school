/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:55:13 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 21:59:32 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 4, b = 2, c = 0, d = 0;

	ft_div_mod(a, b, &c, &d);
	printf("div = %d\n", c);
	printf("mod = %d\n", d);
	return 0;
}