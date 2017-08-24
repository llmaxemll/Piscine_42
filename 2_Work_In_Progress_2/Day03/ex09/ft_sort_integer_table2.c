/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 03:10:23 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/24 03:20:59 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_switch(int *x, int *y)
{
	int t;

	t = *x;
	*x = *y;
	*y = t;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int x;
	int y;

	x = 0;
	y = size;
	while (y != 0)
	{
		while (x < y - 1)
		{
			if (tab[x] > tab[x + 1])
				ft_switch((tab + x), (tab + x + 1));
			x++;
		}
		x = 0;
		if (y != 0)
			y++;
	}
}
