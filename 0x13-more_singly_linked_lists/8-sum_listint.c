#include "lists.h"

/**
 * sum_listint - A function that calculates the sum of all the data in a listint_t list
 * @head: The first node in the linked_t list
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}

