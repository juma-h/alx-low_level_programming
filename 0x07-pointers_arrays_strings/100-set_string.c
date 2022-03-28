#include <stdio.h>
#include "main.h"
/**
 * set_string - sets the value of a pointer
 * @s: src address
 * @to: targete address
 * Return: none
*/
void set_string(char **s, char to)
{
	*s = to;
}
