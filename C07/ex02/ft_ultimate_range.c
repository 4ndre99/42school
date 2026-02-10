/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:33:52 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/10 14:45:56 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(int *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
int	ft_ultimate_range(int **range, int min, int max)
{
	int *str;
	int len;
	int	i;
	
	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	str = malloc(len * sizeof(int));
	if (!str)
		return (-1);
	while (i < len)
	{
		str[i] = min;
		min ++;
		i++;
	}
	str[i] = '\0';
	*range = str;
	return (str_len(*range));
}