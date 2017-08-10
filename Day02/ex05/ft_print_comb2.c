/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:13:03 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/10 02:47:48 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1,&c,1);
}

void	ft_putallchar(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');

	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
	}
}

void	ft_0099(char a, char b, char c, char d)
{
	while (c < '9')
	{
		while (d < '9')
		{
			d++;
			ft_putallchar(a, b, c, d);
		}
		d = '0';
		c++;
		ft_putallchar(a, b, c, d);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';

	x = '0';

	while (a < '9')
	{
		while (b < '9')
		{
			ft_0099();

			c = '0'
			b++;
			if(b > '9')
			{
			d = x;
			x++
			}
		}
		b = '0';
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}
