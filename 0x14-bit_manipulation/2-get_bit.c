#include "main.h"

/**
 * get_bit- gets bit at index
 * @n: base 10 num
 * @index: from 0 to 1
 * Return: -1 on failure
 */






int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 0;
	if (n > 1)
	{
		if (i == index)
			return (n & 1);
		i++;
		get_bit(n >> 1, index);
	}
	return (1);
}
