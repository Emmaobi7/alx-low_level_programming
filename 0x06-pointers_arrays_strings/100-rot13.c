#include "main.h"

/**
 * rot13- rotates 13 times encryptor
 * @s: pointer to string to be changed
 *
 * Return: s
 */







char *rot13(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			while ((s[i] >= 'A' && s[i] <= 'N') || (s[i] >= 'a' && s[i] <= 'n'))
			{
				s[i] += 13;
				i++;
			}
			while ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			{
				s[i] -= 13;
				i++;
			}
		}
		else
		{
			i++;
		}
	}

	return (s);
}
