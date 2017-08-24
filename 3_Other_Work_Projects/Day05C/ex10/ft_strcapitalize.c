/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <adhondt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:55:18 by adhondt           #+#    #+#             */
/*   Updated: 2017/08/16 10:04:30 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	index = 0;
	while (str[index] != '\0')
	{
		if (index == 0 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
			index++;
		}
		if ((str[index] >= 'a' && str[index] <= 'z') && ((str[index - 1] < '0'
		|| str[index - 1] > '9') && (str[index - 1] < 'a'
		|| str[index - 1] > 'z') && (str[index - 1] < 'A'
		|| str[index - 1] > 'Z')))
			str[index] -= 32;
		index++;
	}
	return (str);
}
