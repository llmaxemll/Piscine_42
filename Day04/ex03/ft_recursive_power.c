/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:34:28 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/17 18:57:34 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	if (power == 1)
		return(nb);
	if (power > 0)
	{

		return nb * ft_recursive_power(nb, power - 1);
	}
	return (1);
}

int	main()
{
	printf("%i\n", ft_recursive_power(5, 5));
	return(0);
}
