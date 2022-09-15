#include "main.h"
/**
 * _isdigit - checks if c is a digit from 0 to 9
 * @c: the given digit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
