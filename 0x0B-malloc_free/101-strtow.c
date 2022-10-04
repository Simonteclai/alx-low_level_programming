#include "main.h"
#include <stdlib.h>

int wl(char *str);
int cw(char *str);
char **strtow(char *str);

/**
 * wl - index location
 * @str: the string
 * Return: val
 */

int wl(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}

/**
 * cw - counts the word contained
 * @str: the string
 * Return: val
 */

int cw(char *str)
{
	 int i = 0, w = 0, l = 0;

	 for (i = 0; *(str + i); i++)
		 l++;
	 for (i = 0; i < l; i++)
	 {
		 if (*(str + i) != ' ')
		 {
			 w++;
			 i += wl(str + i);
		 }
	 }
	 return (w);
}

/**
 * strtow - string to word
 * @str: the string
 * Return NULL or val
 */

char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = cw(str);
	if (words == 0)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = wl(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}

