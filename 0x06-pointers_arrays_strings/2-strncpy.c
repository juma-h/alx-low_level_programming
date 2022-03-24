#include <stdio.h>
#include "main.h"
/**
 * _strncpy - this copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 * Return: the pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\O';

	return (dest);
}
