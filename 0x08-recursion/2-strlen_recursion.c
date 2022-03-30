#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints the length of string
 * @s: pointer to character
 * Return: 0
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
