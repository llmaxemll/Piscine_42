/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:19:48 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/09 13:38:11 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_reverse_alphabet(void)
{
	int n = 'z';

	while(n >= 'a')
	{
		ft_putchar(n);
		n--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}
