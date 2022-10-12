#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- Executes another func on array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to func to use
 *
 * Return: nothing
 */




void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
