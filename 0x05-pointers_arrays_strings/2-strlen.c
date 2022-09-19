#include "main.h"

/**
 * _strlen- function to print string length
 * @s: character to be counted
 * Return: 0 for success
 */








int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
