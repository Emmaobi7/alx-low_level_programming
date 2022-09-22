#include "main.h"

/**
 * reverse_array- reverses an array of intw
 * @a: pointer to array
 * @n: size of array
 *
 * Return: nothing
 */





void reverse_array(int *a, int n)
{
	int i, j;

	int x = n - 1;

	i = 0;

	while (i < x)
	{
		j = *(a + i);
		*(a + i) = *(a + x);
		*(a + x) = j;

		i++;
		x--;
	}
}
