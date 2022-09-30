#include <stdio.h>

/**
 * main - prints all argments it receives
 * @argv: vector
 * @argc: arguments
 * Return: val
 */

int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
