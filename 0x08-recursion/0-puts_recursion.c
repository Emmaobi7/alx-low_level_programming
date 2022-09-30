#include "main.h"

/**
 * _puts_recursion- prints a string
 * @s: pointer to string to print
 *
 * Return: nothing
 */


void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
