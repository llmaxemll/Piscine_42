/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_alloc_free_kit.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 00:32:08 by mle-gall          #+#    #+#             */
/*   Updated: 2017/08/13 00:32:10 by mle-gall         ###   ########.fr       */
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

int		**alloc_grid(void)
{
	int i;
	int j;
	int **grid;

	i = 0;
	grid = (int **)malloc(sizeof(int *) * 9);
	if (grid == NULL)
		return (NULL);
	while (i < 9)
	{
		grid[i] = (int *)malloc(sizeof(int) * 9);
		if (grid[i] == NULL)
			return (NULL);
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
