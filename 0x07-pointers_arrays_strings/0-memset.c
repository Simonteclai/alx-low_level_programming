#include "main.h"
#include <string.h>

/**
 * _memset - printes a cinstant empty byte
 * @b: the constant
 * @n: the number of times
 * @s: the pointer
 * Return: a pointer to &s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int element;
	unsigned char *string = s;

	contst unsigned char *constant = b;

	for (element = 0; element < n; element++)
		string[element] = constant[element];

	return (s);
}
