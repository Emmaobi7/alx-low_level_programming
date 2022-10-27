#include "main.h"

/**
 * binary_to_unit- converts binary to decimal
 * @b: pointer to binary string
 * Return: 0 on failure
 */







unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum, n;

	i = 0;
	sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' || b[i] != '0')
		{
			i++;
		}
		else
			return (0);
	}

	for (n = 0; b[n]; n++)
	{
		sum = sum << 1;
		if (b[n] == '1')
			sum += 1;
	}
	return (sum);
}
