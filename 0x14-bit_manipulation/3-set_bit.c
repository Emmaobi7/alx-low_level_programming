#include "main.h"

/**
 * set_bit- sets bit at index
 * @n: pointer to address
 * @index: from 0 
 * Return: 1 on success
 */






int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x, i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
