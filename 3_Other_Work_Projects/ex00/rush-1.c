/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgibson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:32:22 by mgibson           #+#    #+#             */
/*   Updated: 2017/08/13 23:10:06 by mgibson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <stdlib.h>
#import <unistd.h>

int	i;	is_valid_move(int **grid, int current_nb, int x, int y)
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
		if (grid[i][y] == current_nb)
		return (0);
		if (grid[x_start + (i % 3)][y_start + (i / 3)] == current_nb)
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

int		**alloc_grid(void)
{
	int i;
	int j;
	int **grid;

	i = 0;
	grid = (int **)malloc(sizeof(int *) * 9);
	while (i < 9)
	{
		grid[i] = (int *)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	free_grid(int **grid)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

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
	ft_putstr("Erreur\n");
	return (0);
}

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

int	main(int argc, char **argv)
{
	int **grid;
	int **grid_rev;

	grid = alloc_grid();
	grid_rev = alloc_grid();
	if (argc != 10)
		return (ft_disp_error());
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
