#include <stdlib.h>
#include <stdio.h>

/**
 * main - shows the name of the first argument in argv 0
 * @argc: number of arguments
 * @argv: argument vector
 * Return: value
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
