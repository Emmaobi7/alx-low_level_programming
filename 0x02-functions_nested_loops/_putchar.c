#include "main.h"
#include <unistd.h>

/**
 *main- entrypoint
 *Description: print function
 * Return: 0 always
 */	

int _putchar(char c)
{
	return (write(1, &c, 1));
}
