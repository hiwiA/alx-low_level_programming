#include "lists.h"
/**
 * listint_len - return number of elements in a linkedlist
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no_nod = 0;

	while (h!= NULL)
	{
		h = h->next;
		no_nod++;
	}

	return (no_nod);
}
