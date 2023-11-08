#include "main.h"

/**
 * free_grid - frees previously allocated memory
 * @grid: pointer to the array
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
