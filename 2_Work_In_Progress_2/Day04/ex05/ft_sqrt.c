/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:37:53 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/24 13:49:45 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;
	int sign;

	x = 0;
	sign = 1;
	if (nb >= 2147483642)
		return (0);
	if (nb < 0)
	{
		sign = -1;
		nb *= sign;
	}
	while (x * x != nb && x * x < nb)
		x++;
	if (x * x != nb)
		return (0);
	return (x * sign);
}