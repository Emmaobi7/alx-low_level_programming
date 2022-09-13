#include "main.h"

/**
 * jack_bauer-a void function
 * Description: a fuction to print every second of time
 * Return: void
 */



void jack_bauer(void)
{
	int i, x, j;

	for (i = 0; i <= 23; i++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
