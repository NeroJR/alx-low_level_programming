#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - pointer to a 2D array of ints
 *@width: parameter passed to fn
 *@height: paramter passed to fn
 *Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **pt;

	if (width < 1 || height < 1)
		return (NULL);

	pt = malloc(height * sizeof(int *));

	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		pt[x] = malloc(width * sizeof(int));
		if (pt[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(pt[x]);
			}
			free(pt);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			pt[y][z] = 0;
		}
	}
	return (pt);
}
