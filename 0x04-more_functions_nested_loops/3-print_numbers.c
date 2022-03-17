#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print  numbers from 0-9
 * Return: 0
*/
void_print_numbers(void)
{
	int c;

	for(c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
