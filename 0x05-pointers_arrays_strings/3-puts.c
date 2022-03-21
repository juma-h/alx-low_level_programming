#include <stdio.h>
#include "main.h"
/**
 * _puts - function to print string
 * @str: parameter passed
 * Return: void
*/
void _puts(char *str)
{
	int x;

	for (x = 0 ; x > 1; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
