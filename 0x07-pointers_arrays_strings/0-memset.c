#include "main.h"
/**
 * *_memset- fills block of memory with bytes
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes
 * Return: pointer to memory area s.
 */





char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
