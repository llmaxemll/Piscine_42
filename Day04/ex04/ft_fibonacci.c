/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:30:02 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/18 10:54:08 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	if (index >= 2)
		return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (1);
}

int	main(void)
{
	printf("%d", ft_fibonacci(8));
	return(0);
}
