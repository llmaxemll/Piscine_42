/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:46:18 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/16 21:15:49 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putallchar(int n, char i, char h, char g, char f, char e, char d, char c, char b, char a)
{
	ft_putchar(a);
	if (n == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(b);
	if (n == 2)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(c);
	if (n == 3)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(d);
	if (n == 4)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(e);
	if (n == 5)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(f);
	if (n == 6)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(g);
	if (n == 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(h);
	if (n == 8)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(i);
	if (n == 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	char a;
	char b;
	char c;
	char d;
	char e;
	char f;
	char g;
	char h;
	char i;
	
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	e = '0';
	f = '0';
	g = '0';
	h = '0';
	i = '0';

	while (a <= '1')
	{
		b = a + 1;
		while (b <= '2')
		{
			c = b + 1;
			while (c <= '3')
			{
				d = c + 1;
				while (d <= '4')
				{
					e = d + 1;
					while (e <= '5')
					{
						f = e + 1;
						while (f <= '6')
						{
							g = f + 1;
							while (g <= '7')
							{
								h = g + 1;
								while (h <= '8')
								{
									i = h + 1;
									while (i <= '9')
									{
										ft_putallchar(n, i, h, g, f, e, d, c, b, a);
										i++;
									}
									h++;
								}
								g++;
							}
							f++;
						}
						e++;
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}	

int	main()
{
	ft_print_combn(4);
	return(0);
}
