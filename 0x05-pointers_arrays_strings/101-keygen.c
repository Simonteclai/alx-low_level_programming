#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gets key
 * Return: 0 always
 */
int main(void)
{
	int b = 0, d = 0;
	time_t t;

	srand((unsigned int) time(&t);
			while (d < 2772)
			{
			b = rand() % 128;
			if ((d + b) > 2772)
			break;
			d = d + b;
			printf("%c", b);
			}
			printf("%c\n", (2772 - c));
			return (0);
}
