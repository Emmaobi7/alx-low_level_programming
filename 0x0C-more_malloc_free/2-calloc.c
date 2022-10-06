#include <stdlib.h>
#include "main.h"

/**
 * _calloc- allocates memory for an array
 * @nmemb: n elements of array
 * @size: bytes each
 * Return: pointer to new mem
 */





void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n, i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;

	p = malloc(n);
	if (p == NULL)
		return (NULL);
	
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
