#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the memory associated with a linked list
 * @head: pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
