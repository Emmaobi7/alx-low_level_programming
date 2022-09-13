#include "main.h"

/**
 * times_table- current function
 * Description: print the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j * i);
		}
		_putchar('\n');

	}
}

