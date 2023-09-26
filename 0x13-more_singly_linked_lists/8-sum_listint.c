#include "lists.h"

/**
 * sum_listint - returns sum of all data in a linked list
 * @head: pointer to the first node
 *
 * Return: value of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
