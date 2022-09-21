#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: string to be compared
 * @s2: string two
 * Return: o if equal positive is greater negative if less
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++; s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
}
