#include <stdio.h>

/**
 * main- entrypoint
 * Descripyion: numbers from zero to nine
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}

	putchar('\n');

	return (0);
}
