/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:16:51 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/10 12:29:16 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*str;
	int	len;
	int	i;
	
	len = max - min;
	i = 0;
	str = malloc(len * sizeof(int));
	if (str == NULL || min >= max)
		return NULL;
	while (i < len)
	{
		str[i] = min;
		min ++;
		i++;
	}
	str[i] = '\0';
	return (str);
}