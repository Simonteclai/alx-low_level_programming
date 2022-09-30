#include "main.h"
#include <unistd.h>

/**
 * _putchar - write
 * @c: character
 * Return: val
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
