#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parameter one
 * @s2: second parameter
 * Return: 0 if equal or 1 if not
*/
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while(*s1 != '\0' && *s2 != '\0')
	{
		if(*s1 != *s2)
		{
			c = 1;
		}
		s1++;
		s2++;
	}
	if (c == o)
		return 0;
	else 
		return 1;
}

