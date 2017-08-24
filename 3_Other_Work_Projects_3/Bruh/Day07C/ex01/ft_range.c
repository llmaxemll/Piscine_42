/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:27:08 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/21 20:06:21 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int len;

	i = 0;
	len = max - min;
	if (max <= min)
		return (NULL);
	if ((tab = (int*)malloc(sizeof(int) * len)) == NULL)
		return (NULL);
	while (i < len)
	{
		tab[i] = min;
		min = min + 1;
		i++;
	}
	return (tab);
}
