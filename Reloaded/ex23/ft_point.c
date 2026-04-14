/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:14:12 by ade-arau          #+#    #+#             */
/*   Updated: 2022/04/07 20:47:02 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main()
{
	t_point arroz;

	set_point(&arroz);
	printf("arroz.x = %d || arroz.y = %d\n", arroz.x, arroz.y);
	return (0);
}