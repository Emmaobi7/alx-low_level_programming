#include "main.h"

/**
 * clear_bit- sets bit to 0 at index
 * @n: pointer to num
 * @index: start from 0
 * Return: 1 on success
 */






int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
