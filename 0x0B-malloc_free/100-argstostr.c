#include "main.h"
#include <stdlib.h>

/**
 * argstostr - makes an argumeent string
 * @ac: the string
 * @av: the number of arguments
 * Return: NULL or val
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *s;

	if ((ac <= 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
		}
		n++;
		s = malloc(sizeof(char) * n);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				s[k] = av[i][j];
				k++;
			}
			s[k] = '\n';
			k++;
		}
		s[k] = '\0';
		return (s);
}
