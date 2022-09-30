#include <stdio.h>

/**
 * main -  multiplies two arguments
 * @argv: vector
 * @argc: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 2)
	{
		mul = atoi(*argv[1] * *argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
