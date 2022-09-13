#include "main.h"

/**
 * print_last_digit- current function
 * @n: int type parameter to function
 * Description: function to print last digit
 * Return: 0
 */

int print_last_digit(int n)
{
	int res = n % 10;

	if (res < 0)
		res *= -1;

	_putchar('\n');
}
