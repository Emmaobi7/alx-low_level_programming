#include "main.h"

/**
 * countbit- counts bits
 * @n: num
 * Return: count
 */










int countbit(unsigned long int n)
{
	unsigned long int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	
	return (count);
}


/**
 * flip_bits- checks for number of bits to flip
 * @n: base 10 int
 * @m: base 10 int
 * Return: number of bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return countbit(n ^ m);
}
