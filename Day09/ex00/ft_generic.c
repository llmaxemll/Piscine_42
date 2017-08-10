/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:56:50 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/10 17:39:09 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_generic(void)
{
	write(1, "Tut tut ; Tut tut\n", 18);
}

int	main()
{
	ft_generic();
	return(0);
}
