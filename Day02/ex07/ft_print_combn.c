/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:46:18 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/12 21:00:52 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_both_char(char n, char b)
{
	char c;
	char d;

	c = ',';
	d = ' ';
	ft_putchar(n);
	ft_putchar(b);
	if (n == '8' && b == '9')
	{
	}
	else
	{
		ft_putchar(c);
		ft_putchar(d);
	}
}

void	ft_print_combn(int n)
{
	char b;

	n = '0';
	b = '0';
	while (n <= '9')
	{
		b = n + 1;
		while (b <= '9')
		{
			ft_put_both_char(n, b);
			b++;
		}
		n++;
	}
}
