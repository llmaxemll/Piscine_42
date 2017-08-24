/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:02:05 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 16:03:22 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"

int		ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
	return (1);
}

int		ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
	return (1);
}

int		ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
	return (1);
}

int		ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (-1);
	}
	ft_putnbr(a / b);
	ft_putchar('\n');
	return (1);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (-1);
	}
	ft_putnbr(a % b);
	ft_putchar('\n');
	return (1);
}
