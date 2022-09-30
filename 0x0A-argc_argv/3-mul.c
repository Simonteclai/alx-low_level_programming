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
	int i, j, mul;

	mul = 0;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
