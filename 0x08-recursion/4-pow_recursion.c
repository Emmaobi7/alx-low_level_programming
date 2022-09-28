#include "main.h"

/**
 * _pow_recursion
 * @x: number to sqaure
 * @y: number to raise
 * Return: power of x to y
 */





int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
