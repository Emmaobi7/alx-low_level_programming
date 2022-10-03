#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup- returns copy of string
 * @str: pointer to string
 * Return: pointer to duplicate string
 */






char *_strdup(char *str)
{
	char *p;
	int len, index = 0;

	len = 0;
	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	p = malloc(sizeof(*str) * len);

	if (p == NULL)
		return (NULL);

	while (index <= len)
	{
		p[index] = str[index];
		index++;
	}
	return (p);
}
