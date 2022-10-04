#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null or val
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc(sizeof(*s) * (i + j + 1));
	if (s == 0)
	{
		free(s);
		return ('\0');
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l < j; k++, l++)
	{
		s[k] = s2[l];
	}
	return (s);
}

