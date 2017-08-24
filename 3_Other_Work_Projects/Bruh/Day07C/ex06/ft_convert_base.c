/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:18:48 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/15 15:54:38 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned long int	ft_power(unsigned long long int nb, int power)
{
	if (power >= 1)
		nb = nb * ft_power(nb, power - 1);
	else if (power < 0)
		nb = 0;
	else
		return (1);
	return (nb);
}

unsigned int		to_base_10(char *nbr, char *base_from, int len)
{
	int				tab[4];
	unsigned int	nb_b10;

	tab[0] = 0;
	nb_b10 = 0;
	tab[3] = ft_strlen(nbr) - 1;
	if (nbr[0] == '-')
	{
		tab[0]++;
		tab[3]--;
	}
	while (tab[3] >= 0)
	{
		tab[1] = 0;
		while (base_from[tab[1]] != '\0')
		{
			if (nbr[tab[0]] == base_from[tab[1]])
				tab[2] = tab[1];
			tab[1]++;
		}
		nb_b10 = nb_b10 + tab[2] * ft_power(len, tab[3]);
		tab[3]--;
		tab[0]++;
	}
	return (nb_b10);
}

void				make_nb(int i, char *base_to, unsigned int nb, char *cnb)
{
	unsigned int	tmp;
	int				j;
	int				pw;
	int				nb_base_to;
	int				rst;

	tmp = 0;
	j = 0;
	pw = i;
	nb_base_to = ft_strlen(base_to);
	while (j < i)
	{
		pw--;
		tmp = ft_power(nb_base_to, pw);
		rst = nb / tmp;
		nb = nb % tmp;
		*cnb = base_to[rst];
		cnb++;
		j++;
	}
	*cnb = '\0';
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char						*cnb;
	int							nb_base_to;
	unsigned long int			nb;
	int							i;
	unsigned long int			tmp;

	i = 1;
	cnb = 0;
	nb_base_to = ft_strlen(base_to);
	nb = to_base_10(nbr, base_from, ft_strlen(base_from));
	while ((tmp = ft_power(nb_base_to, i)) <= nb)
		i++;
	if (nbr[0] == '-')
	{
		cnb = (char *)malloc(sizeof(char) * i + 2);
		cnb[0] = '-';
		make_nb(i, base_to, nb, &cnb[1]);
		return (cnb);
	}
	else
	{
		cnb = (char *)malloc(sizeof(char) * i + 1);
		make_nb(i, base_to, nb, cnb);
	}
	return (cnb);
}
