/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:17:44 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/09 19:23:20 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1,&c,1);
}

void ft_putallchar(char c, char b, char a)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if(!(a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';

		while(a <= '7')
		{
			b = a + 1;
			while(b <= '8')
			{
				c = b + 1;
				while(c <= '9')
				{
					ft_putallchar(c,b,a);
					c++;
				}
				b++;
			}
		a++;
		}
}

int	main()
{
	ft_print_comb();
	return(0);
}
