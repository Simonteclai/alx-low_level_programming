#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char p;

	for (p = 'z'; p >= 'a'; p--)
	putchar(p);
	putchar('\n');
	return (0);
}
