#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: string to be compared
 * @s2: string two
 * Return: o if equal positive is greater negative if less
 */

int _strcmp(char *s1, char *s2)
{
	char i, j;
	int n;

	for (i = 'a'; s1[i] <= 'z'; i++)
		;
	for (j = 'a'; s2[j] <= 'z'; j++)
	{
		if (i == j)
		n == 0;
		else if (i > j)
		n > 0;
		else if (i < j)
		n < 0;
	}
}
