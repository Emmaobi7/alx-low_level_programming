#include <stdio.h>

/**
 * main- entrypoint
 * Description: alphabet in lower and upper case
 * Return: 0 success
 */

int main(void)
{
	char c;
	char i;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
