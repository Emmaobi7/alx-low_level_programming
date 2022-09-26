#include "main.h"

/**
 * *_memcpy- copies a block of memory
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to desination string
 */




char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
