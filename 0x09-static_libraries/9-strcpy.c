#include "main.h"

/**
 * _strcpy - copies a string from str to dest including null
 * @src: the string to be copied
 * @dest: buffer place
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

