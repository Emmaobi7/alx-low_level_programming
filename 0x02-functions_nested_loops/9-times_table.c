#include "main.h"

/**
 * times_table- current function
 * Description: print the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			num = i * j;

			if (num <= 9)
				_putchar(' ');
			else
				_putchar((num / 10) + '0');
			_putchar((num) % 10 + '0');
		}
		_putchar('\n');

	}
}

