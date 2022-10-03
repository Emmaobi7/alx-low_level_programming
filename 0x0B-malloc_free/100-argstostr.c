#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr- concatnate command line arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string
 */




char *argstostr(int ac, char **av)
{
	int i;
	char *p;
	int j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	p = malloc(sizeof(char *) * ac);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[j]; j++)
			p[i] = *av[j];
		_putchar('\n');
	}

	_putchar('\n');
	return (p);
}
