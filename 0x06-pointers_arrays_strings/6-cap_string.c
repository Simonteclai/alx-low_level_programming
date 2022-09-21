#include "main.h"

/**
 * cap_string - capitalizes elements of an array
 * @x: the string
 * Return: the string
 */

char *cap_string(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] < 122)
			x[i] = x[i] - 32;
	}
	return (x);
}

