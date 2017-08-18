/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:27:57 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/17 18:45:34 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return(1);
	if (nb < 0)
		return(0);
	if (nb <= 1)
		return 1;
	return nb * ft_recursive_factorial(nb - 1);
}

int	main()
{
	printf("%i\n", ft_recursive_factorial(1));
	return(0);
}
