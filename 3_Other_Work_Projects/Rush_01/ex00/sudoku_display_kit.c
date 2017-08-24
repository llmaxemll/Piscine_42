/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_display_kit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 00:26:12 by mle-gall          #+#    #+#             */
/*   Updated: 2017/08/13 00:26:14 by mle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fill_grid(int **grid, int size, char **str);
int		try_move_rev(int **grid, int x, int y, int is_reverse);
int		compare_solution(int **grid1, int **grid2);
int		resolve(int **grid, int x, int y, int is_reverse);
int		ft_disp_error(void);
void	print_grid(int **grid);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	free_grid(int **grid);
int		**alloc_grid(void);
int		try_move(int **grid, int x, int y, int is_reverse);
int		is_valid_move(int **grid, int current_nb, int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	char c;

	c = 48 + n;
	ft_putchar(c);
}

void	print_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (j == 8)
				ft_putnbr(grid[i][j]);
			else
			{
				ft_putnbr(grid[i][j]);
				ft_putchar(' ');
			}
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

int		ft_disp_error(void)
{
	ft_putstr("Error\n");
	return (0);
}
