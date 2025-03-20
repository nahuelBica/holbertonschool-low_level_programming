#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free memory of 2 dimensional array of ints
 *@grid: 2dim array
 *@height: height of array
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}
