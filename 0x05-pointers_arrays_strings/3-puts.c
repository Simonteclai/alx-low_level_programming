#include "main.h"

/**
  * _puts - prints the string
  * @str: the string
  */

void _puts(char *str)
{
	int ele;
	
	for (ele = 0; str[ele] != '\0'; ele++)
	{
		_putchar(str[ele]);
	}
	_putchar('\n');
}
