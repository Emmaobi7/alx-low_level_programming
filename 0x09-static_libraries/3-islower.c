#include "main.h"

/**
 * _islower- check lowercased
 * @c: integer type c to be checked
 *
 * Description: function to check lowercase x
 * Return: 1 for lowercase and 1 if not lowercased
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
