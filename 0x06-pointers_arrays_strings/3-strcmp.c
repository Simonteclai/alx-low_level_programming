#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: string to be compared
 * @s2: string two
 * Return: o if equal positive is greater negative if less
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (i == j)
			return (0);
		else if (i > j)
			return (1);
		else if (i < j)
		return (-1);
	}
}
