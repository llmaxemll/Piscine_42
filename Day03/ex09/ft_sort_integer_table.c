/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:36:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/17 01:40:05 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int a;
	int b;
	a = 0;
	while (a < size)
	{
		if (tab[a] < tab[a] + 1)
		{
			tab = &b;
			tab = &tab[a];
			tab[a] = b;
		}
	}
}

int	main()
{
	ft_sort_integer_table();
	return(0);
}
