#include <stdio.h>

/**
 * main- entrypoint
 * Description: combine single digit numbers
 * Return: 0 as success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
