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
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
© 2022 GitHub, Inc.

