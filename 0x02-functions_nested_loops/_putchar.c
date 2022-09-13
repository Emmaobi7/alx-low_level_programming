#include "main.h"

/**
 *main- entrypoint
 *Description: print function
 * Return: 0 always
 */	

int main(void)
{
	int _putchar(char c)
	{
		while (*c)
		{
			_putchar(*c);
			c++;
		}
		_putchar('\n');

		return (0);
	}
}
