#include "main.h"

/**
 * swap_int - swaps the value of two ints
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
