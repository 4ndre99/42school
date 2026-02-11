/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:56:52 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:46:36 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	n;
	int	nega;
	int	res;

	res = 0;
	nega = 1;
	n = valid(str);
	if (n < 0)
	{
		n = -n;
		nega = -nega;
	}
	if (str[n] < 48 || str[n] > 57)
		return (0);
	while (str[n])
	{
		if (str[n] >= 48 && str[n] <= 57)
			res = (res * 10) + (str[n] - 48);
		else
			return (res * nega);
		n++;
	}
	return (res * nega);
}
