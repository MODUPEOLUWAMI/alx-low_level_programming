#include "main.h"
#include <stdlib.h>

/*
 * free_grid - Frees a two dimensional grid
 * @grid: the freerer
 * @height: the height
 *
 * Return: void
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
