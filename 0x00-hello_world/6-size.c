#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * Return: returns the value 0 if exit properly, non-zero otherwise
 */
int main(void)
{
	char d;
	int a;
	float f;
	long int b;
	long long int c;

	printf("Size of a char: %zu byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}

