#include "main.h"

/**
 * _strlen - to find length of a string
 * @s: ths string
 * Return: the length
 */
int _strlen(char *s)
{
	int elements;

	for (elements = 0; s[elements] != '\0'; elements++)
	;

	return (elements);
}
