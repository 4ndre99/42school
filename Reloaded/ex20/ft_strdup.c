/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:52:49 by ade-arau          #+#    #+#             */
/*   Updated: 2026/03/16 19:07:43 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	a = malloc(str_len(src));
	while(src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

int main()
{
	char *a = "ola amigos!";
	char *b = ft_strup(a);
	printf("%s\n", b);
	free(b);
	return (0);
}