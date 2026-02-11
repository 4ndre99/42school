/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:30:58 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:38:40 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sleft;
	unsigned int	osrc;

	i = 0;
	j = 0;
	osrc = 0;
	if (!dest || !src)
		return (0);
	while (src[osrc])
		osrc++;
	while (dest[i] && i < size)
		i++;
	sleft = size - 1 - i;
	if (sleft <= 0)
		return (size + i);
	while (j < sleft)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + osrc);
}

// int main()
// {
// 	char *c = NULL;
// 	char d[] = "hi there";
// 	char s[] = "- how you doin?";
// 	printf("%u\n", ft_strlcat(d, s, 10));
// 	printf("%u\n", ft_strlcat(c, s, 16));
// 	printf("%u\n", ft_strlcat(d, c, 16));
// 	printf("%u\n", ft_strlcat(d, s, 4)); <--
// 	printf("%u\n", ft_strlcat(d, s, 16));
// 	printf("%u\n", ft_strlcat(d, s, 23));
// 	printf("%u\n", ft_strlcat(d, s, 30));
// 	return (0);
// }