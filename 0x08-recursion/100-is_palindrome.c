#include "main.h"

/**
 * _strlen_recursion - length
 * @s: pointer
 * Return: val
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * p - palidrome
 * @s: character
 * @l: int
 * @i: int
 * Return: value
 */
int p(char *s, int l, int i)
{
	if (i < 1 && s[i] == s[l])
	{
		return (p(s, l - 1, i + 1));
	}
	else if (s[i] != s[l])
	{
		return (0);
	}
	else
	return (1);
}

/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: value
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s) - 1;

	return (p(s, len, i));
}
