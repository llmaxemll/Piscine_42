/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:38:31 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/17 18:25:52 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int x;
	int z;

	x = 2;
	z = nb;
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	if (power == 1)
		return(nb);
	while (x <= power)
	{
		z *= nb;
		x++;
	}
	return (z);
}

int	main()
{
	printf("%i\n", ft_iterative_power(5, 5);
	return(0);
}
