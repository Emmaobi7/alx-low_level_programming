#include "main.h"

/**
 * string_toupper- coverts to upper case
 * @s: pointerr to char to be changed
 *
 * Return: s
 *
 */





char *string_toupper(char *s)
{
	int j, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}

	return (s);
}
