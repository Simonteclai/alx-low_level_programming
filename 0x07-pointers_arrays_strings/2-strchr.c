#include "main.h"

/**
 * _strchr - searches for a char i a string
 * @s: the string
 * @c: the character to be found
 * Return: null or pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s[c])
		{
			*s = &i;
		return (*s);
		}
		else
			return (NULL);
	}
}

