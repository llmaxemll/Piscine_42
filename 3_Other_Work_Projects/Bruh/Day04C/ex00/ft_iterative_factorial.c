/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-karo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:36:31 by sel-karo          #+#    #+#             */
/*   Updated: 2017/08/22 06:51:15 by sel-karo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb >= 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

int main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
