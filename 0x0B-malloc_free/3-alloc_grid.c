#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid- returns pointer to 2d array of int
 * @width: row
 * @height: column
 * Return: pointer to pointer to int
 */





int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, n;


	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * width);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		p[i] = malloc(sizeof(int) * height);

	for (n = 0; n < height; n++)
	{
		for (j = 0; j < width; j++)
		{
			p[n][j] = 0;
		}
	}

	return (p);
}
