/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 03:06:33 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/20 01:00:38 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	printf("%d", x);
	return (x);
}
