#include "main.h"

/**
 * _strncat - concaterates desst with n values of src
 * @dest: string to be appended
 * @src: string to append
 * @n: number of characters to append
 * Return: _strncat
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		while (j <= n)
			dest[i] = src[j];
		i++;
	}
	return (dest);
}

