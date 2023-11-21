#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: the grid to free up
 * @height: number of rows
 *
 * Return: this function does not return any value
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
}
