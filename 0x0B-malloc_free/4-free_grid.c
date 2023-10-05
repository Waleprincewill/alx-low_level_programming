#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid-das
* @height:fds
* @grid:asda
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
