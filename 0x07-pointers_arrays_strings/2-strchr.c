#include "main.h"

/**
 * _strchr - searches for a char i a string
 * @s: the string
 * @c: the character to be found
 * Return: null or pointer
 */

char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	return (0);
}


