/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-karo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 23:53:28 by sel-karo          #+#    #+#             */
/*   Updated: 2017/08/22 00:21:27 by sel-karo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
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
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
