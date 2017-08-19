/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:36:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/20 01:02:46 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_switch(int *a, int *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_sort_integer_table(int *tab, int size)
{
	int		a;
	int		b;

	a = 0;
	b = size;
	while (b != 0)
	{
		while (a < b - 1)
		{
			if (tab[a] > tab[a + 1])
				ft_switch(&tab[a], &tab[a + 1]);
			a++;
		}
		a = 0;
		if (b != 0)
			b--;
	}

	int o;
	int c;
	o = 0;
	c = 0;
	while (tab[o] != '\0')
	{
		c = tab[o];
		printf("%d", c);	
		o++;
		if (tab[o] == '\0')
			return (0);
	}
	return (0);
}
