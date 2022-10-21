#include <stdio.h>

/*
 * constractor attribute to startupfun()
 * to execute before main()
 */

	void startup(void) __attribute__ ((constractor));

/*
 * destructor attribute to cleanupfun()
 * executed after main()
 */
	void cleanupfun(void) __attribute__ ((destructor));

/**
 * startupfun - prints text
 */

	void startupfun(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
