#include "lists.h"

/**
 * listint_len - returns total number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
