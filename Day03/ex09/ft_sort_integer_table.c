/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:36:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/21 21:09:12 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_switch(int *x, int *y)
{
	char t;

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
			while (tab[x] <= tab[y])
				ft_switch(&tab[x], &tab[y]);
			x++;
		}
		tab[y] = '\0';
		y--;
	}
	return (tab);
}

int	main(void)
{
	int *tab = NULL;
	int size = 7;

	tab[size] = 431655;
	ft_sort_integer_table(tab, size);
	return (0);
}
