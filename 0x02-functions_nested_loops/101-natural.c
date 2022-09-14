#include <stdio.h>

/**
 * main- entrypoint
 * Description: program to compute and add mutltiples of int
 * Return: 0 always
 */

int main(void)
{
	int i, n = 1024;
	int x = 5;
	int y = 3;
	int res = 0;

	for (i = 1; i < n; i++)
	{
		if ((i % x == 0) || (i % y == 0))
		{
			res += i;
		}
	}
	printf("%d\n", res);

	return (0);
}




