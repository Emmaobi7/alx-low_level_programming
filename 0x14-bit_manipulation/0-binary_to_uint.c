#include "main.h"

/**
 * binary_to_uint- converts binary to decimal
 * @b: pointer to binary string
 * Return: 0 on failure
 */







unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len;
	unsigned int decval;

	i = len = decval = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	while (i < len)
	{
		decval = decval << 1;
		if (b[i] == '1')
			decval += 1;
		i++;
	}
	return (decval);
}
