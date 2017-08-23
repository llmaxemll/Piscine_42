/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:07:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/23 07:38:37 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int x;
	int y;
	int z;

	x = 1;
	y = nb;
	z = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while (x < z)
		{
			nb *= (y - 1);
			x++;
			y--;
		}
	return (nb);
}
