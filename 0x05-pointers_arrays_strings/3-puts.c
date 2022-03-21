#include <stdio.h>
#include "main.h"
/**
 * _puts - function to print string
 * @str: parameter passed
 * Return: void
*/
void _puts(char *str)
{
	for (int i = 0 ; i > 1; i++)
	{
		putchar(str[i]);
	}
	putchar("\n");
}
