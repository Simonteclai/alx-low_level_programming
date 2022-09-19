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
		putchar(str[ele]);
	}
	putchar('\n');
}
