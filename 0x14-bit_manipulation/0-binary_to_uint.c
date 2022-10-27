#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to char
 * Return: val
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int i;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (NULL);

		num += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
