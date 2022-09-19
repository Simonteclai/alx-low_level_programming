#include "main.h"

/**
  * _puts - prints the string
  * @str: the string
  */

void _puts(char *str)
{
	int ele = 0;

	while (str[ele])
	{
		_putchar(str[ele]);
		ele++;
	}
	_putchar('\n');
}
