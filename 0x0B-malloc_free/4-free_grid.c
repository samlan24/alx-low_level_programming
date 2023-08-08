#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid
 * @grid: pointer to the grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
