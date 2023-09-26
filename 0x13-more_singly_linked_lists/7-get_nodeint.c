#include "lists.h"

/**
 * *get_nodeint_at_index - returns a pointer to the node,
 * at a certain index
 * @head: pointer to the first node
 * @index: index of the node to retrieve
 *
 * Return: pointer to the required index, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
