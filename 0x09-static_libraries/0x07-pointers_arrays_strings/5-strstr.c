#include "main.h"

/**
 * _strstr - finds substring
 * @haystack: string
 * @needle: find
 * Return: val
 */

char *_strstr(char *haystack, char *needle)
{
	char *st1, *st2;

	while (*haystack != '\0')
	{
		st1 = haystack;
		st2 = needle;

		while (*haystack != '\0' && *st2 != '\0' && *haystack == *st2)
		{
			haystack++;
			st2++;
		}
		if (*st2 == '\0')
			return (st1);
		haystack = st1 + 1;
	}
	return (0);
}
