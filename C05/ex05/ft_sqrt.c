/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-arau <ade-arau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:20:58 by ade-arau          #+#    #+#             */
/*   Updated: 2026/02/11 16:58:40 by ade-arau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive_sqrt(int nb, int x)
{
	if ((x * x) == nb)
		return (x);
	if ((x * x) > nb)
		return (0);
	return (recursive_sqrt(nb, (x + 1)));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (recursive_sqrt(nb, 1));
}
