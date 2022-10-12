#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- Searches for an integer
 * @array: pointer to array of int
 * @size: size of array
 * @cmp: pointer to func used to compare
 *
 * Return: 0
 */




int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}

