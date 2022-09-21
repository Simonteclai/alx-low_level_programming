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

	do {
		for  (i = 0; dest[i] != '\0'; i++)
			dest[i] = src[i];
	} while (n == i);
	return (dest);
}
