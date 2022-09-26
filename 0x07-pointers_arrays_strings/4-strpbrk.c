#include "main.h"

/**
 * _strpbrk - searches a set of bytes
 * @s: string one
 * @accept: string two
 * Return: pointer or 0
 */

char *_strpbrk(char *s, char *accept)
{
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accep[j] != '\0'; j++)
		{
			if (accept[j] = s[i])
				return(s);
		}
		return (0);
	}
}
