/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_moovecoords_kit.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 00:27:52 by mle-gall          #+#    #+#             */
/*   Updated: 2017/08/13 00:27:54 by mle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		is_valid_move(int **grid, int current_nb, int x, int y)
{
	int i;
	int x_start;
	int y_start;

	i = 0;
	x_start = (x / 3) * 3;
	y_start = (y / 3) * 3;
	while (i < 9)
	{
		if (grid[x][i] == current_nb)
			return (0);
		if (grid[x_start + (i % 3)][y_start + (i / 3)] == current_nb)
			return (0);
		if (grid[i][y] == current_nb)
			return (0);
		i++;
	}
	return (1);
}

int		try_move(int **grid, int x, int y, int is_reverse)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (is_valid_move(grid, i + 1, x, y))
		{
			grid[x][y] = i + 1;
			if ((y + 1) < 9)
				if (resolve(grid, x, y + 1, is_reverse))
					return (1);
				else
					grid[x][y] = 0;
			else if ((x + 1) < 9)
				if (resolve(grid, x + 1, 0, is_reverse))
					return (1);
				else
					grid[x][y] = 0;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		try_move_rev(int **grid, int x, int y, int is_reverse)
{
	int i;

	i = 9;
	while (i > 0)
	{
		if (is_valid_move(grid, i, x, y))
		{
			grid[x][y] = i;
			if ((y + 1) < 9)
				if (resolve(grid, x, y + 1, is_reverse))
					return (1);
				else
					grid[x][y] = 0;
			else if ((x + 1) < 9)
				if (resolve(grid, x + 1, 0, is_reverse))
					return (1);
				else
					grid[x][y] = 0;
			else
				return (1);
		}
		i--;
	}
	return (0);
}
