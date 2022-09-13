#include "main.h"

/**
 * print_sign- current function
 * @n: parameter to be checked for its sign
 * Description: function to check number sign
 * Return: 1 for positive 0 for equal and -1 sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
