/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:46:18 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/12 12:26:05 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_both_char(a, b)
{
	char c;

	char d;
	c = ',';
	d = ' ';
	ft_putchar(a);
	ft_putchar(b);
	if (a == '8' && b == '9')
	{
	}
	else
	{
		ft_putchar(c);
		ft_putchar(d);
	}
}

void	ft_print_combn(void)
{
	char a;
	char b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_put_both_char(a, b);
			b++;
		}
		a++;
	}
}

int		main()
{
	ft_print_combn();
	return(0);
}
