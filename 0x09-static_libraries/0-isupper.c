#include "main.h"

/**
 * _isupper- fuction that checks for uppercase
 * @c: character to be checked
 *
 * Return: 1 when true
 * on fail return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
