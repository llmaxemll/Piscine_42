/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <adhondt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:14:46 by adhondt           #+#    #+#             */
/*   Updated: 2017/08/20 21:41:17 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int indexdest;

	index = 0;
	indexdest = 0;
	while (dest[indexdest] != '\0')
		indexdest++;
	while (src[index] != '\0' && index != nb)
	{
		dest[indexdest] = src[index];
		index++;
		indexdest++;
	}
	dest[indexdest] = '\0';
	return (dest);
}
