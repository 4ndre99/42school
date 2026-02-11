/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:22:06 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:45:13 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb)
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
// 	printf("%u\n", ft_strlcat(d, s, 10));
// 	printf("%u\n", ft_strlcat(c, s, 16));
// 	printf("%u\n", ft_strlcat(d, c, 16));
// 	printf("%u\n", ft_strlcat(d, s, 4));
// 	printf("%u\n", ft_strlcat(d, s, 16));
// 	printf("%u\n", ft_strlcat(d, s, 23));
// 	printf("%u\n", ft_strlcat(d, s, 30));
// 	return (0);
// }