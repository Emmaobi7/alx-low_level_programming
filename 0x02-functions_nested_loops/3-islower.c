#include "main.h"

/**
 * _islower- check lowercased
 * @c: integer type c
 *
 * Description: function to check lowercase x
 * Return: 1 for true
 */

int _islower(int c)
{
	if (c == 'z' - 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
