#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: string to be compared
 * @s2: string two
 * Return: o if equal positive is greater negative if less
 */

int _strcmp(char *s1, char *s2)
{
	char *st1 = s1;
	char *st2 = s2;

	while (*st1 != '\0' && *st2 != '\0' && *st1 == *st2)
	{
		st1++;
		st2++;
	}
	return (*st1 - *st2)
}
