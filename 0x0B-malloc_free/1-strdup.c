#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space
 * @str: the string
 * Return: val or NULL
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *d;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;

	d = malloc(sizeof(char) * (l + 1));

		if (d == NULL)
			return (NULL);
		for (i = 0; str[i]; i++)
			d[i] = str[i];
		d[l] = '\0';
		return (d);
}
