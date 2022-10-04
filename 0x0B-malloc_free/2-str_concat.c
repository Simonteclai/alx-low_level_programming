#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null or val
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *con;
	int cci = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		l++;
	con = malloc(sizeof(char) * l);

	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con[cci++] = s1[i];
	for (i = 0; s2[i]; i++)
		con[cci++] = s2[i];
	return (con);
}
