/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:07:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/17 16:37:31 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int x;
	int y;
	int z;

	x = nb;
	y = 2;
	z = 1;
	if (x == 0 || x == 1)
		return(0);
	else if (x < 13 && x > 1)
	{
		while (y <= nb)
		{
			z *= y;
			y++;
		}
	}
	else
	{
		z = 0;
	}
	printf("%d", z);
	return(0);
}

int	main()
{
	ft_iterative_factorial(3);
	return(0);
}
