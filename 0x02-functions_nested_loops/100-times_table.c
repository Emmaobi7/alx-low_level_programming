#include "main.h"

/**
 * print_times_table- function name
 * @n: intvparameter
 * Description: function to print tine table
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, num;
	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				num = i * j;
				if (num <= 99)
					_putchar(' ');
				if (num <= 9)
					_putchar(' ');
				if (num >= 100)
				{
					_putchar((num / 100) + '0');
					_putchar(((num / 10)) % 10 + '0');
				}
				else if (num <= 99 && num >= 10)
				{
					_putchar((num / 10) + '0');
				}
				_putchar((num % 10) + '0');
			}
			_putchar('\n');
		}
}


