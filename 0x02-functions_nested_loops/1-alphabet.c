#include "main.h"


/**
 * print_alphabet- entrypoint
 * Description: function to print alphabets
 * Return: 0 always
 */




void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

