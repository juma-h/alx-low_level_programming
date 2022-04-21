#include <stdio.h>

void myPrint(void) __attribute__ ((constructor));

/**
 * myPrint - prints before main function
 * Return: no return
*/

void myPrint(void)
{
	printf ("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
