#include "main.h"

/**
 * *_strpbrk- searches a string for set of bytes
 * @s: string to be scanned
 * @accept: matching string
 *
 * Return: pointer to bytes in s
 */





char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	if (*s == accept[i])
		return (s);

	return (0);
}
