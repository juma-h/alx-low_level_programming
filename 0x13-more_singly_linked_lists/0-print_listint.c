#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nod = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nod++;
	}

	return (nod);
}
