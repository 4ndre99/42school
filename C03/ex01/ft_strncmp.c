/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:50:11 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 11:41:21 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}

// int main(){
// 	char s[] = "ola";
// 	char a[] = "alo";
// 	char b[] = " ola";
// 	char c[] = "olas";
// 	printf("%d\n", ft_strncmp(s, a, 3));
// 	printf("%d\n", ft_strncmp(s, b, 2));
// 	printf("%d\n", ft_strncmp(s, c, 2));
// 	printf("%d\n", ft_strncmp(s, s, 4));
// }