#include "main.h"
/**
 * _isupper - checks if the character is uppercase
 * @c: the character to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
	char i;

	for (i = "A"; i <= "Z"; i++)
	if (c == i)
	return (1);
	if (c != i)
	return (0);
}
