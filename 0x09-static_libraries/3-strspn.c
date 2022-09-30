#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: pointer to string to be scanned
 * @accept: pointer to char to be matched
 *
 * Return: 0
 */





unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (i);
}
