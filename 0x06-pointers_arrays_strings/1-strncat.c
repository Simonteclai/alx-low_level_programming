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
	_strncat = strncat(dest, src, n);
	return (_strncat);
}

