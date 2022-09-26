#include "main.h"

/**
 * _strspn - length of prefix substring
 * @accept: bytes
 * @s: initial segment
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *st1, *st2;

	st1 = s;
	st2 = accept;

	for (i = 0; st1[i] != '\0'; i++)
	{
		for (j = 0; st2[j] != '\0'; j++)
		{
			if (st2[j] == st1[i])
			{count++;
			break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
