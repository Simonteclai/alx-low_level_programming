#include "main.h"

/**
 * _strncpy - string copy
 * @dest: char
 * @src: char
 * @n: int
 * Return: val
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
			i++;
		dest[i] = '\n';
	}
	return (dest);
}
