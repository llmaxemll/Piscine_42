/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:39:23 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/21 20:06:16 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int len;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	if ((*range = (int*)malloc(sizeof(int) * len)) == NULL)
	{
		*range = NULL;
		return (0);
	}
	while (i < len)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}
