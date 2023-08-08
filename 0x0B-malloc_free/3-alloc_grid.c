#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates an integer grid using malloc.
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	if (width + height < 2 || width < 1 || height <= 1)
		return (NULL);

	int **grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);

}
