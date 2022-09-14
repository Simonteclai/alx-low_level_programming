#include "main.h"
/**
 * times_table - prints the nine table
 */
void times_table(void)
{
	int a, mul, res;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			res = a * mul;
			if (res < 9)
			{
			_putchar(' ');
			}
			else
			{
			_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
