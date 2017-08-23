/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 01:30:55 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/23 07:49:46 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int x;

	x = 2;
	if (nb > 1)
	{
		while ((nb % x) != 0)
		{
			x++;
		}
	}
	if (nb == x)
		return (1);
	else
		return (0);
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
