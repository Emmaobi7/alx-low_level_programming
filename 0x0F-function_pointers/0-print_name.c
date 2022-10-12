#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- prints a name
 * @name: pointer to name
 * @f: function pointer
 *
 * Return: nothing
 */




void print_name(char *name, void (*f)(char *))
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		_putchar(i);
		i++;
	}

	f(name);
}
