#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees the space occupied by 2D array
 *@grid: space occupied by malloc
 *@height: height of grid
 *Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

	return (0);
}
