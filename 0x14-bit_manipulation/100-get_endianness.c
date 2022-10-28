#include "main.h"

/**
 * get_endianness-gets endiannes of machine
 * Return: 1 for small 0 for big
 */







int get_endianness(void)
{
	int x;
	char *r =(char *) &x;

	if (*r)
		return(1);
	return (0);
}
