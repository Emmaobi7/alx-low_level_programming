#include "main.h"

/**
 * binary_to_unit- converts binary to decimal
 * @b: pointer to binary string
 * Return: 0 on failure
 */







unsigned int binary_to_uint(const char *b)
{
	int i;
	int sum;
	int base = 1;

	i = 0;
	sum = 0;
	while (b[i] != '\0')
	{
		if (b[i] != 1 || b[i] != 0)
		{
			return (0);
		}
		sum += (b[i] - '0') * base;
		base *= 2;
		i++;
	}
	return (sum);
}
