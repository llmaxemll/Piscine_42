/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:06:49 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 16:01:45 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"
#include "ft_opp.h"
#include "output.h"

void	do_op(int a, int (*op)(int, int), int b)
{
	op(a, b);
}

int		ft_usage(int a, int b)
{
	int	i;

	a = 0;
	b = 0;
	i = 0;
	ft_putstr("error : only [ ");
	while (i < 5)
	{
		ft_putstr(g_opptab[i].op);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.\n");
	return (0);
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
	while (ft_strcmp(g_opptab[i].op, "") != 0)
	{
		if (ft_strcmp(argv[2], g_opptab[i].op) == 0)
		{
			do_op(a, g_opptab[i].f, b);
			return (0);
		}
		i++;
	}
	do_op(a, g_opptab[i].f, b);
	return (0);
}
