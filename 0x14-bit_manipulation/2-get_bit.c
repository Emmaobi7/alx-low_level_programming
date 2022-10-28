#include "main.h"

/**
 * get_bit- gets bit at index
 * @n: base 10 num
 * @index: from 0 to 1
 * Return: -1 on failure
 */






int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
