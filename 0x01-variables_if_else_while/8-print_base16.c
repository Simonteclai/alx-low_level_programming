#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int s;
	char e;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
