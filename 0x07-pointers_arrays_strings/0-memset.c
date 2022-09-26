#include "main.h"

/**
 * _memset - printes a cinstant empty byte
 * @b: the constant
 * @n: the number of times
 * @s: the pointer
 * Return: a pointer to &s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		s[e] = b;
	}

	return (s);
}
