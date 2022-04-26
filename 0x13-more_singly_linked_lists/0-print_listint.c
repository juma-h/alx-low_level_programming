#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
