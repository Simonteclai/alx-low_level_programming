#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if the input is alpha
 * @c: gets in put and checks
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
