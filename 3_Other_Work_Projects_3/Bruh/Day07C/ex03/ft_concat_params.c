/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:18:59 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/16 10:23:25 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i = i + 1;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len = len + 1;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*str;

	i = 1;
	len = 1;
	if (argv == NULL)
		return (NULL);
	while (i < argc)
	{
		len = len + ft_strlen(argv[i]);
		i = i + 1;
	}
	len = len + i;
	str = (char*)malloc(sizeof(char) * len);
	i = 1;
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		if (argv[i + 1] != NULL)
			str = ft_strcat(str, "\n");
		i = i + 1;
	}
	return (str);
}
