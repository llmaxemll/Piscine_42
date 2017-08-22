/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:36:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/22 07:44:50 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_switch(int *x, int *y)
{
	int		t;

	t = *x;
	*x = *y;
	*y = t;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		x;
	int		y;

	x = 0;
	while (y < size)
	{
		y = x + 1;
		if (tab[x] > tab[y])
		{
			ft_switch(&tab[x], &tab[y]);
			x = 0;
		}
		else
			x++;
	}
}
