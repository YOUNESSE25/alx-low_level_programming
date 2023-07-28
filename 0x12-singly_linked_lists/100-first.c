#include<stdio.h>
#include<stdlib.h>
void pr(void) __attribute__ ((constructor));
/**
 * pr - print before the main
 */
void pr(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
