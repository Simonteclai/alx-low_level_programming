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
	printf("size of a char: %lu bytes\n", sizeof(d));
	printf("size of a int: %lu bytes\n", sizeof(a));
	printf("size of a long int: %lu bytes\n", sizeof(b));
	printf("size of a long long int: %lu bytes\n", sizeof(c));
	printf("size of a float: %lu bytes\n", sizeof(f));
	return(0);
}

