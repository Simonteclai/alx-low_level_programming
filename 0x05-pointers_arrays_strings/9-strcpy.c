#include "main.h"

/**
 * _strcpy - copies a string from str to dest including null
 * @src: the string to be copied
 * @dest: buffer place
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

