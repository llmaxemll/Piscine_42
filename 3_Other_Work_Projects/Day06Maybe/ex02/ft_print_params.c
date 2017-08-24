/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabbas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:44:21 by oabbas            #+#    #+#             */
/*   Updated: 2017/08/22 04:10:14 by oabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1,&c,1);
}

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
	int		i;
	char	a;

	i = 1;
	a = '\n';
	if (argc > 0)
	{
		while (argv[i])
		{
			ft_print_str(argv[i]);
			ft_putchar(a);
			i++;
		}
	}
	return (0);
}
