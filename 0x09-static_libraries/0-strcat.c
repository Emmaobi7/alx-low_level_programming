#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to string dest
 */








char *_strcat(char *dest, char *src)
{
	int j = 0;
	int k = 0;
	int i;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		k++;
	}
	for (i = 0; i <= k; i++)
	{
		dest[j + i] = src[i];
	}


	return (dest);
}
