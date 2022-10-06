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

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * max);

	if (p == NULL)
		return (NULL);
	return (p);

}
