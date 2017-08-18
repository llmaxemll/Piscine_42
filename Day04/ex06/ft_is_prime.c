/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 11:46:40 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/18 14:36:15 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	int j;
	int isPrime;

	i = 2;
	j = 2;

	while (i <= nb)
	{
		i++;
		isPrime = 0;
		while (j <= i/2)
		{
			j++;
			if (i % j == 0)
				isPrime = 1;
		}
	}
	printf("%i", isPrime);
	return 1;
}

int	main()
{
	ft_is_prime(100);
	return(0);
}
