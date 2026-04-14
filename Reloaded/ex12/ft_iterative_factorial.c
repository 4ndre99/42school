/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:21:21 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 22:38:36 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	if (nb > 0)
	{
		int	n;
		
		n = nb;
		while (nb-- > 1)
			n *= nb;
		return (n);
	}
	
	return (0);
}

int main()
{
	int a = 5;
	printf("%d! = %d\n", a, ft_iterative_factorial(a));
	return 0;	
}