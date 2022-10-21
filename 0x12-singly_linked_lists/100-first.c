#include <stdio.h>

void __attribute__((constructor)) simo(void);

/**
 * simo - prints text before main function executes
 */

void simo(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
