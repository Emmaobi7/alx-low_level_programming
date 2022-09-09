#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entrypoint
 * Description: compare last digits
 * Return: 0 for success
 */

int main(void)
{
	int n;
	int s;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	s = n % 10;
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, s);
	}
	else if (s == 0)
	{
		printf("Last digit of %d is %d and is zero", n, s);
	}
	else if (s < 6 && s != 0)
	{
		printf("Last digit of %d is %d and is less than %d and not %d", n, s, 6, 0);
	}

	printf("\n");


	return (0);
}
