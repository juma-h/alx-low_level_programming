#include <stdio.h>
#include "main.h"
/**
 * main - function that print no of arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0
*/
int main(int argc, int argv[])
{
	(void) argv; // we are not using so we void it
	printf("%d\n", argc - 1);

	return (0);
}
