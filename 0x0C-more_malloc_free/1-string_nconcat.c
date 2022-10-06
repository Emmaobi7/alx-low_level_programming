#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- concatenate two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of chars to concatenate
 * Return: pointer to new string
 */







char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	unsigned int x;
	char *p;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	p = malloc(sizeof(*s1) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	x = 0;
	while (x < n)
	{
		p[i + x] = s2[x];
		x++;
	}
	p[i] = '\0';
	return (p);
}


