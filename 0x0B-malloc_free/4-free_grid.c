#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of a 2d array
 * @grid: 2d grid
 * @height: height of the 2d array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[1]);
	}
}
