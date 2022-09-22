#include "main.h"

/**
 * _strncpy - copies one string to another
 * @dest: string one
 * @src: string two
 * @n: the value of the elements
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for  (i = 0; (i < n) && (src[i] != '\0'); i++)
			dest[i] = src[i];
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
