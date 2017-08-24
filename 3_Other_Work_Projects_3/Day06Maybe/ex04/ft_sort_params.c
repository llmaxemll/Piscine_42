/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabbas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 01:02:39 by oabbas            #+#    #+#             */
/*   Updated: 2017/08/22 04:12:16 by oabbas           ###   ########.fr       */
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

int		ft_cmp(char *a, char *b)
{
	int		x;

	x = 0;
	while (a[x] != '\0' && b[x] == a[x] && b[x] != '\0')
		x++;
	return (b[x] - a[x]);
}

void	ft_tri(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_cmp(argv[i], argv[j]) < 0)
			{
				c = argv[i];
				argv[i] = argv[j];
				argv[j] = c;
				j--;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	char	c;

	a = 1;
	c = '\n';
	ft_tri(argc, argv);
	while (argv[a])
	{
		ft_print_str(argv[a]);
		ft_putchar(c);
		a++;
	}
	return (0);
}
