/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 00:24:12 by mle-gall          #+#    #+#             */
/*   Updated: 2017/08/13 00:24:34 by mle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		resolve(int **grid, int x, int y, int is_reverse)
{
	if (!(x < 9 && y < 9))
		return (1);
	if (grid[x][y] != 0)
	{
		if ((y + 1) < 9)
			return (resolve(grid, x, y + 1, is_reverse));
		else if ((x + 1) < 9)
			return (resolve(grid, x + 1, 0, is_reverse));
		else
			return (1);
	}
	else
	{
		if (is_reverse)
			return (try_move_rev(grid, x, y, is_reverse));
		else
			return (try_move(grid, x, y, is_reverse));
	}
	return (0);
}

int		compare_solution(int **grid1, int **grid2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (grid1[i][j] != grid2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		fill_grid(int **grid, int size, char **str)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (str[i + 1][j])
		{
			if (str[i + 1][j] == '.')
				grid[i][j] = 0;
			else if (str[i + 1][j] >= '0' && str[i + 1][j] <= '9')
				if (is_valid_move(grid, str[i + 1][j] - 48, i, j))
					grid[i][j] = str[i + 1][j] - 48;
				else
					return (ft_disp_error());
			else
				return (ft_disp_error());
			j++;
		}
		if (j != 9)
			return (ft_disp_error());
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int **grid;
	int **grid_rev;

	grid = alloc_grid();
	grid_rev = alloc_grid();
	if (grid == NULL || grid_rev == NULL || argc != 10)
		ft_disp_error();
	if (!fill_grid(grid, argc, argv))
		return (0);
	fill_grid(grid_rev, argc, argv);
	resolve(grid, 0, 0, 0);
	resolve(grid_rev, 0, 0, 1);
	if (compare_solution(grid, grid_rev))
		print_grid(grid);
	else
		ft_disp_error();
	free_grid(grid);
	free_grid(grid_rev);
	return (0);
}
