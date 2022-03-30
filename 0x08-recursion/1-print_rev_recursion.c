#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s : pointer to character
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
