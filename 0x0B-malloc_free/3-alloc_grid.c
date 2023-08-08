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
	int **g;
	int i, k;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	g = malloc(height * sizeof(*g));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(**g));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
