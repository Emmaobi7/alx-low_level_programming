#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: chatacter to print
 *
 * Return: 1 on success
 * on erro, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
