#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints changes
 * @argv: vector
 * @argc: count arguments
 * Return: val
 */

int main(int argc, char *argv[])
{
	int c, coins = 0;

	if (argc != 2)
	{
		printf("Errors\n");
		return (1);
	}

	c = atoi(argv[1]);

	while (c > 0)
	{
		coins++;

		if ((c - 25) >= 0)
		{
			c -= 25;
			continue;
		}
		else if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}
		else if ((c - 5) >= 0)
		{
			c -= 5;
			continue;
		}
		else if ((c - 2) >= 0)
		{
			c -= 2;
			continue;
		}
		c--;
	}
	printf("%d\n", coins);

	return (0);
}
