#include "main.h"

/**
 * @*_strncat- concatenate n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: dest
 */







char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';


	return (dest);
}
