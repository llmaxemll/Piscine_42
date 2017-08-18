/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:37:53 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/18 12:45:05 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i = 0;
	int x = 0;
	if (nb >= 2147483642)
		return 0;
	if (nb <= 0)
		return 0;
	if (x < nb)
	{
		while (x < nb)
		{
			x = i * i;
			if(x != nb)
				i++;
		}
		printf("%i", i);
	}
	return(i);
}

int	main()
{
	ft_sqrt(2147483641);
	return(0);
}
