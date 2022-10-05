#include "main.h"
#include <stdlib.h>

/**
* free_grid - function frees allocated grid
* @grid: grid parameter
* @height: integer parameter
*/

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
