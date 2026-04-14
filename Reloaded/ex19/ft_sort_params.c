/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:13:09 by ade-arau          #+#    #+#             */
/*   Updated: 2026/03/16 17:25:09 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	sort_them_all(int n, char **arr)
{
	int	i;

	i = 2;
	while (i < n)
	{
		char *key;
		int		j;

		key = arr[i];
		j = i - 1;
		while (j >= 1 && ft_strcmp(arr[j], key) > 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		i++;
	}

}
int main(int ac, char **av)
{
	if (ac > 1)
	{
		sort_them_all(ac, av);
		int i;

		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}