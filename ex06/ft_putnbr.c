/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:34:03 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/12 13:35:28 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putchar((nb * -1) / 10 + 48);
		ft_putchar((nb * -1) % 10 + 48);
	}
	else
	{
		ft_putchar(nb / 10 + 48);
		ft_putchar(nb % 10 + 48);
	}
}

int	main()
{
	ft_putnbr(42);
	return(0);
}
