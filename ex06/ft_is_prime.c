/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vak <vak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:03:59 by vak               #+#    #+#             */
/*   Updated: 2026/02/07 17:25:23 by vak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive_prime(int nb, int x)
{
	if ((nb % x) == 0 && x == nb)
		return (1);
	if ((nb % x) == 0 && x < nb) 
		return (0);
	return (recursive_prime(nb, (x + 1)));
}
int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb != 2 && (nb % 2) == 0)
		return (0);
	if (nb == 2)
		return (1);
	return (recursive_prime(nb, 2));
}