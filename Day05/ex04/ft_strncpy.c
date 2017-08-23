/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 14:20:04 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/22 19:00:30 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	strcpy(src, dest)

	{
		while (src[x] != '\0' || x != n)
		{
			src[x] = dest[x];
			x++;
		}
	}
	return (0);
	return 0;
}

int main()
{
	ft_strncpy("bruh\n", "thefuck?\n", 5);
	return(0);
}


