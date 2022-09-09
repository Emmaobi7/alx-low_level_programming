#include <stdio.h>

/**
 * main- entrypoint
 * Description:print all base 16
 * Return: 0 if successful
 */

int main(void)
{
	int a;
	char c;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
