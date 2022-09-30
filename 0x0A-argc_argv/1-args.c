#include <stdio.h>

/**
 * main - shows number of arguments
 * @argc: number of arguments
 * @argv: vector
 * Return: val
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
