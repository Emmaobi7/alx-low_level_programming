#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entrypoint
 * Description: evaluates random numbers
 * Return:0 indicating success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if ( n == 0)
	{
		printf("%d is zero", n);
	}

	printf("\n");

	return (0);
}
