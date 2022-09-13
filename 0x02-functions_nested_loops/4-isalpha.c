#include "main.h"
#include <ctype.h>
/**
 * _isalpha- check for alphabets
 * @c: datavof type int
 * Description: function to check for alphabets
 * Return: 1 if true
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
