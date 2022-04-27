#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: head
 * Return: length of a string
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	const listint_t *currentvsss = h;

	while (currentvsss != NULL)
	{
		printf("%i\n", currentvsss->n);
		currentv = currentvsss->next;
		no_nodes++;
	}
	return (no_nodes);
}
