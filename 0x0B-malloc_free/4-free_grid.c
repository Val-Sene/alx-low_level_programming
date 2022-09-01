#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - fees a 2 dimensional grid
 * @grid: multidimensional array of integers
 * @height: height of grid
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
