/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:51:14 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/17 00:08:26 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	if (c =='\t' || c == '\n' || c == ' ' || c == '\v' || c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int sign;
	int i;
	int result;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i] == 1))
		i++;
	if (str[i] =='+')
		i++;
	else if (str[i]	== '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi("10555446"));
	printf("%d\n", atoi("10555446"));
	return (0);
}
