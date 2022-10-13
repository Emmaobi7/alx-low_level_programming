#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- prints strings
 * @separator: string separator
 * @n: number of strings
 * Return: nothing
 */





void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	char *k;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		k = va_arg(args, char *);
		if (k == NULL)
			printf("nil");
		printf("%s", k);
		if (i != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}


