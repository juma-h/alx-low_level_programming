#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function to check for digit
 * @c: integer input
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int c = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			c = 1;
			break;
		}
	}

	return (c;
}
© 2022 GitHub, Inc.

