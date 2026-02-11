/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:19:35 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:48:25 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	long	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	comp(char a, char *base)
{
	int	n;

	n = 0;
	while (base[n])
	{
		if (a == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	valid(char *str)
{
	int	n;
	int	nega;

	n = 0;
	nega = 0;
	while ((str[n] >= '\t' && str[n] <= '\r') || str[n] == ' ')
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			nega++;
		n++;
	}
	if (nega % 2 > 0)
		nega = -1;
	else
		nega = 1;
	return (nega * n);
}

int	check(char *base)
{
	long	i;
	long	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	nega;
	int	res;

	n = valid(str);
	nega = 1;
	res = 0;
	if (check(base) > 0)
		return (0);
	if (n < 0)
	{
		nega = -nega;
		n = -n;
	}
	if (comp(str[n], base) < 0)
		return (0);
	while (comp(str[n], base) >= 0)
	{
		res = (res * str_len(base)) + comp(str[n], base);
		n++;
	}
	return (nega * res);
}
