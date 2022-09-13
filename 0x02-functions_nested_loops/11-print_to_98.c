#include "main.h"
#include <stdio.h>

/**
 * print_to_98- function name
 * @n: parameter from where to print to 98
 *
 * Description: function to print natural numbers
 * Return: void function
 */






void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
