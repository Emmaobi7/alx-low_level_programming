#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */






int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1 == s2)
		{
			return (0);
		}
		else if (s1 > s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (*s1 - *s2);
		}
		i++;
	}
}
