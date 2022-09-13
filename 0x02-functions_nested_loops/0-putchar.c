#include "main.h"

/**
 * main- entrypoint
 * Description: print text using _putchar
 * Return: 0 always
 */

int main(void)
{
	char *x = "_putchar";

	while (*x)
	{
		_putchar(*x);
		x++;
	}
	_putchar('\n');

	return (0);
}
