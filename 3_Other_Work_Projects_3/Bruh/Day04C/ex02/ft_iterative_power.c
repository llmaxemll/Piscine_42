/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-karo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:00:13 by sel-karo          #+#    #+#             */
/*   Updated: 2017/08/22 03:08:53 by sel-karo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int value;

	value = nb;
	if (power <= 0)
	{
		return (1);
	}
	else
	{
		while (power != 1)
		{
			nb = value * nb;
			power--;
		}
	}
	return (nb);
}
