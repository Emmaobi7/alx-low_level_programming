#include <stdlib.h>
#include "main.h"

/**
 * array_range- creates an array of integers
 * @min: first value of array
 * @max: last value of array
 * Return: pointer to new array
 */






int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min;

	p = malloc(sizeof(int) * (size + 1));

	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);

}
