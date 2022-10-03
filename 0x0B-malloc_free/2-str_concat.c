#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat- concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: pointer to s1
 */






char *str_concat(char *s1, char *s2)
{
	int len1, len2, index, index2;
	int n;

	len2 = 0;
	len1 = 0;
	index = 0;
	index2 = 0;
	char *p;

	if (s1 == NULL || s2 == NULL)
		return (" ");

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	n = len1 + len2;

	p = malloc(sizeof(*s1) * n);

	if (p == NULL)
		return (NULL);

	while(s1[index] != '\0')
	{
		p[index] = s1[index];
		index++;
	}
	while (s2[index2] != '\0')
	{
		p[len1 + index2] = s2[index2];
		index2++;
	}
	
	return (p);
}

