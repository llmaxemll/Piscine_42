/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 09:36:12 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/20 22:08:37 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	return(strcpy(src, dest));
	return (0);
}

int	main()
{
	char s1[] = "aaaaaaaaa";
	char s2[]= "bonjour";
	printf( "%s", strcpy(s1, s2) );
	return (0);
}
