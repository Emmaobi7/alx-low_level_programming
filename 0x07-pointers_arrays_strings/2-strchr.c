#include "main.h"
#include <stdio.h>

/**
 * *_strchr- locates a characterin a string
 * @s: pointer to string to be scanned
 * @c: character to check first occurence
 *
 * Return: pointer to first occurance
 */





char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (!*s)
		{
			return (NULL);
		}
		s++;
	}

	return (0);
}
