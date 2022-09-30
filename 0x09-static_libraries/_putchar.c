#include <unistd.h>

/**
 * _putchar- prints a character
 * @c: character to be printed
 * Return: 1 0n success
 * on fail 0
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
