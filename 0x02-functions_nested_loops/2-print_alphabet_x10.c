#include "main.h"
/**
 * print_alphabet_x10 - prind the alphabet 10 times
 * Return: 0 (Succuss)
 */
void print_alphabet_x10(void)
{
	char e;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for  (e = 'a'; e <= 'z'; e++)
			_putchar(e);
			_putchar('\n');
	}
}
