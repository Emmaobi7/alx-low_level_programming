#include "main.h"

/**
 * puts2- function to print every 2nd char
 * @str: character
 * Return: nothing
 *
 */





void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
