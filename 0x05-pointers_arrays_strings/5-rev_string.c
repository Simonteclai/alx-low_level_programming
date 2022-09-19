#include "main.h"

/**
 * rev_string - reverses a givien string
 * @s: pointer that points to the string
 */

void rev_string(char *s)
{
	int a, len;
	char *start, *end = s;

	for (a = 0; s[a] != '\n' && s[a + 1] != '\0'; a++)
	{
		end++;
	}
	len = a + 1;
	start = s;
	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *end;
		*end = *start;
		*start = x;
		start++;
		end--;
	}
	end[len + 1] = '\0';
}
