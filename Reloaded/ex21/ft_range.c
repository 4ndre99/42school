/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:11:46 by ade-arau          #+#    #+#             */
/*   Updated: 2026/03/17 16:42:47 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}

int main()
{
	int min = 1, max = 8;
	int *range = ft_range(min, max);
	for (int i = 0; i < max; i++)
		printf("%d\n", range[i]);
	return 0;
}