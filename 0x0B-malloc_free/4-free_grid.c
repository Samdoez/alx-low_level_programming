#include "main.h"

/**
 * free_grid - it frees d 2 dimens. grid created by your alloc_grid function
 * @grid: grid to be free
 * @height: the colmn
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
