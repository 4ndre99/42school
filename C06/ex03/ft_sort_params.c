/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:28:49 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/09 12:37:42 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		write (1, &str[n], 1);
		n++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	if (s1[n] != s2[n])
		return (s1[n] - s2[n]);
	return (0);
}

void	sort_them_all(char **str, int x)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < x)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort_them_all(argv, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	argv[i] = NULL;
	return (0);
}
