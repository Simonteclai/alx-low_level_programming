#include "main.h"

/**
 * _strlen_recursion - length
 * @s: pointer
 * Return: val
 */
 int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * p - palidrome
 * @s: character
 * @l: int
 * Return: value
 */
int p(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *s(s + 1))
	{
		return (p(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: value
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	
	return (p(s, len - 1));
}
