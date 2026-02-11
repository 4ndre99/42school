/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:34:01 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 11:37:01 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

// int main(){
// 	char s[] = "ola";
// 	char a[] = "alo";
// 	char b[] = " ola";
// 	char c[] = "olas";
// 	printf("%d\n", ft_strcmp(s, a));
// 	printf("%d\n", ft_strcmp(s, b));
// 	printf("%d\n", ft_strcmp(s, c));
// 	printf("%d\n", ft_strcmp(s, s));
// }