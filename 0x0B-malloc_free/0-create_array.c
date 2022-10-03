#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array- creates an array of chars
 * @size: size of array
 * @c: char
 * Return: NULL if fail or pointer to array
 */






char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
