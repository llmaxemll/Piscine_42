/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:36:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/24 13:12:12 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int		*x;
	int		*y;
	int		t;
	int		*s;

	x = 0;
	y = 0;
	s = &size;
	t = 0;
	while (y != 0)
	{
		while (x < y - 1)
		{
			if (tab[*x] > tab[*x + 1])
			t = *x;
			*x = *y;
			*y = t;
			x++;
		}
		x = 0;
		if (y != 0)
			y++;
	}
}

int	main()
{
	int *y;
	y = 0;
	int tab[100] = {6,5,4,4,8,9,4};
	ft_sort_integer_table(tab, 8);
	printf("%d", *y);
	return (0);
}
