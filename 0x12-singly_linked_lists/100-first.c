#include "stdio.h"

void startup_func(void) __attribute__ ((constructor));

/**
 * startup_func- func that exec before main()
 * Return: nothing
 */





void startup_func(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
