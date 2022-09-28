#include "main.h"

/**
 * _strlen_recursion - tells string length
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
