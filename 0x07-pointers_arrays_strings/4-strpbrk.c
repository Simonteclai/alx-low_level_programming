#include "main.h"

/**
 * _strpbrk - searches a set of bytes
 * @s: string one
 * @accept: string two
 * Return: pointer or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	
	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return(s);
			}
		}
	}
	return (0);
}
