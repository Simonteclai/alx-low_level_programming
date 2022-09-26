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
	int array[];

	for  (s = 0; array[s] != '\0' && array[s] < n; s++)
	{
		array[s] = array[b];
	}
	return (array);
}
