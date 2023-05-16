#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid created by your alloc_grid function.
 * @grid: integers
 * @height: rows
 *
 * Return: Allocated
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
