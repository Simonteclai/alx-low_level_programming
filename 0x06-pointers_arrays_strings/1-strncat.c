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
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

