/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vak <vak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:24:40 by vak               #+#    #+#             */
/*   Updated: 2026/02/07 16:03:07 by vak              ###   ########.fr       */
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