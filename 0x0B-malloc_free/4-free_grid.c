#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid- frees my 2d grid alloc_grid
 * @grid: pointer to pointer to grid
 * @height: coloumn
 *
 * Return: nothing
 */





void free_grid(int **grid, int height)
{
	int index;

	index = 0;

	if (grid == NULL || height == 0)
		return;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
