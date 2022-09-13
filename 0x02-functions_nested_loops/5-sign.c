#include "main.h"

/**
 * print_sign- current function
 * @n: parameter for function of type int
 * Description: function to check number sign
 * Return: 1 for positive 0 for equal and -1 sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
