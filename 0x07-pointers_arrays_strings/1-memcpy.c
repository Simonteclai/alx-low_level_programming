#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to a string
 * @src: memory to be copied
 * @n: the number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*dest[i] = *src[i];

	return (*dest);
}



