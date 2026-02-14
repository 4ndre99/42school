/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:45:39 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/14 18:52:16 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	size_matrix(int size, char **strs)
{
	int	x;

	x = 0;
	while (size > -1)
	{
		x += str_len(strs[size]);
		size--;
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;

	i = 0;
	if (size == 0)
	{
		new = malloc(1);
		*new = '\0';
		return (new);
	}
	new = malloc(size_matrix(size, strs) + str_len(sep) * (size -1));
	if (!new)
		return (NULL);
	while (i < size && strs[i])
	{
		new = ft_strcpy(strs[i], sep);
		i++;
	}
}
