#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array using malloc
 * @size: the size of the array
 * @c: the array
 * Return: null or val
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	s = malloc(sizeof(*s) * size);
	if (s == 0)
	{
		return ('\0');
	}
	else
	{
		while (i < size)
		{
			*(s + i) = c;
			i++;
		}
		return (s);
	}
}
