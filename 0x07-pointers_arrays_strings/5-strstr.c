#include "main.h"

/**
 * *_strstr- locates a substring
 * @haystack: scanned string
 * @needle: matching string.
 *
 * Return: pointer to substring
 */





char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	if (*haystack == *needle)
		return (haystack);
	return (0);
}
