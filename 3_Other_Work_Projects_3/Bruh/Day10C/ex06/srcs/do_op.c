/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:06:49 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 15:57:03 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "output.h"
#include "args.h"
#include <stdlib.h>

t_op	g_tab[6] = {
	{'+', &add},
	{'-', &sub},
	{'*', &mul},
	{'/', &divide},
	{'%', &mod},
	{0, NULL} };

void	do_op(int a, int (*op)(int, int), int b)
{
	op(a, b);
}

int		main(int argc, char **argv)
{
	int	a;
	int	b;
	int	i;

	i = 0;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	while (g_tab[i].op != 0)
	{
		if (argv[2][0] == g_tab[i].op)
		{
			do_op(a, g_tab[i].f, b);
			return (0);
		}
		i++;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
