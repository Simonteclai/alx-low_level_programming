#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two arguments
 * @argv: vector
 * @argc: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, mul;
	mul = 0;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
