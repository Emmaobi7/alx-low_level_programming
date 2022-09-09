#include <stdio.h>

/**
 * main- entrypoint
 * Description: all alphabets except q and e
 * Return: 0 for success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);

}
