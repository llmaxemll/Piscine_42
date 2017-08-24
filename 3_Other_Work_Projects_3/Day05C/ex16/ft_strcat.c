/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <adhondt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:14:46 by adhondt           #+#    #+#             */
/*   Updated: 2017/08/19 19:39:32 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int indexdest;

	index = 0;
	indexdest = 0;
	while (dest[indexdest] != '\0')
		indexdest++;
	while (src[index] != '\0')
	{
		dest[indexdest] = src[index];
		index++;
		indexdest++;
	}
	dest[indexdest] = '\0';
	return (dest);
}
