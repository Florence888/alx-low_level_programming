#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees up 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees up memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int e;

	for (e = 0; e < height; e++)
	{
		free(grid[e]);
	}
	free(grid);
}
