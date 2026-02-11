/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:02:12 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:44:58 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char *c = NULL;
// 	char d[] = "hi there";
// 	char s[] = "- how you doin?";
// 	printf("%s\n", ft_strcat(d, s));
// 	printf("%s\n", ft_strcat(c, s));
// 	printf("%s\n", ft_strcat(d, c));
// 	printf("%s\n", ft_strcat(d, s));
// 	printf("%s\n", ft_strcat(d, s));
// 	printf("%s\n", ft_strcat(d, s));
// 	return (0);
// }