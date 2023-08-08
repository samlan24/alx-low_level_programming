#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns the grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, k;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; k < width; k++)
			grid[i][k] = 0;
	}

	return (grid);
}
