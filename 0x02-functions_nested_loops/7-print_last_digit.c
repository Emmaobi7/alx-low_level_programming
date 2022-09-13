#include "main.h"

/**
 * print_last_digit- current function
 * @n: int type parameter to function
 * Description: function to print last digit
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n % 10 == 0)
	{
		_putchar(0);
	}
	else
		_putchar(n % 10);

	_putchar('\n');
}
