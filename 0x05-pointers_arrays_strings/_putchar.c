#include <unistd.h>

/**
 * _putchar- function to print character
 * @c: character to be printed
 *
 * Return: 1 on success
 * on fail 0
 */






int _putchar(char c)
{
	return (write(1, &c, 1));
}

