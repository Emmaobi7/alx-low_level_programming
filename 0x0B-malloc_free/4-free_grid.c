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

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
