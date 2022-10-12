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
	if (name != NULL && f != NULL)
		f(name);
}
