#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: Print the alphabet except q and e
 * Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
