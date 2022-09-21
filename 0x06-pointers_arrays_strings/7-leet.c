#include "main.h"

/**
 * leet - encondin functiong
 * @new: the change
 * Return: new converted
 */

char *leet(char *)
{
	int i, j;
	char si[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char er[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char el[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; new[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (new[i] == si[j] || new[i] == er[j])
			{
				new[i] == el[j];
			}
		}
		return (new);
}
