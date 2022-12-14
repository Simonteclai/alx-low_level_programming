#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers starting from 1 and 2
 * Return: always 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1h1, f1h2, f2h1, f2h2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f1 = sum;
	}
	f1h1 = f1 / 10000000000;
	f2h1 = f2 / 10000000000;
	f1h2 = f1 % 10000000000;
	f2h2 = f2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = f1h1 + f2h1;
		h2 = f1h2 + f2h2;
		if (f1h2 + f2h2 > 999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		f1h1 = f2h1;
		f1h2 = f2h2;
		f2h1 = h1;
		f2h2 = h2;
	}
	printf("/n");
	return (0);
}
