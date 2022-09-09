#include <stdio.h>

/**
 * main- entrypoint
 * Description: combination of no of range 99
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 11; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
