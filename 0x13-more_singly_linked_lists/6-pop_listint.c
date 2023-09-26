#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head: A pointer to the first element in the linked list
 *
 * Return: the deleted data inside the elements,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}

