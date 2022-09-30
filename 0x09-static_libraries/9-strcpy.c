#include "main.h"

/**
 * _strcpy- function to copy string
 * @dest: destination char
 * @src: pointer to source
 * Return: 0
 */







char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
