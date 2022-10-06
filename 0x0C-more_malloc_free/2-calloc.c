#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int n, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	ar = malloc(n);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ar[i] = 0;
		i++;
	}
	return (ar);
}
