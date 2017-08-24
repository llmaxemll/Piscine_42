/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabbas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 01:57:33 by oabbas            #+#    #+#             */
/*   Updated: 2017/08/22 01:01:28 by oabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_str(char *str)
{
	int		a;
	char	c;

	a = 0;
	while (str[a])
	{
		c = str[a];
		ft_putchar(c);
		a++;
	}
}

int		main(int argc, char **argv)
{
	int		compteur;
	char	c;

	compteur = argc - 1;
	c = '\n';
	while (compteur >= 1)
	{
		ft_print_str(argv[compteur]);
		ft_putchar(c);
		compteur--;
	}
	return (0);
}
