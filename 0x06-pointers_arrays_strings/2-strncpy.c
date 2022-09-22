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

	for  (i = 0; i < n; i++)
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
