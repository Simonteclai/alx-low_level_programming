#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the alphabets are lower or not
 * @c: accepts input and checks
 * Return: 0  or 1
 *
 */
int _islower(int c)
{
	int e;

	for (e = 'a'; e <= 'z'; e++)
	{
	if (c == e)
	{
		return (1);
	}
	}
		return (0);
}
