#include <stdio.h>
#include <stdlib.h>

/**
 * op_add- sums two integers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- Gets difference of two ints
 * @a: first int
 * @b: second int
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies two ints
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
 * op_div- divides two numbers
 * @a: number
 * @b: divisor
 * Return: dividend
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- returns remainder after division
 * @a: number
 * @b: divisor
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
