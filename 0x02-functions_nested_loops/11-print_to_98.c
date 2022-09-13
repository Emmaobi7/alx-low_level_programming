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
	int i, j;

	if (n > 98)
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
	else if (n < 98)
		for (j = n; j <= 98; j++)
			printf("%d, ", j);
	else
		printf("%d", 98);
}
