#include "main.h"
#include <stdlib.h>




/**
 * free_grid - frees a 2 dimensional grid pre-created alloc_grid function
 * @grid: input
 * @height: input
 */




void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
