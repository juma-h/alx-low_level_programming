#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to print 0 to 9 then newline
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		_putchar(i);
	_putchar('\n');
}
