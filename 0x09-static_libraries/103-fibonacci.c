#include <stdio.h>
/**
 * main - prints the fibonacci terms less than 4000000
 * Return: always 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fsum;
	float tsum;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			tsum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", tsum);
	return (0);
}
