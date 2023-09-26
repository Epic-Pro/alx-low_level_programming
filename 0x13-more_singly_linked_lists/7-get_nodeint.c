#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the node at a certain index in a linked list
 * @head: The first node in the linked list
 * @index: Index of the node to return
 *
 * Return: A pointer to the node, or NULL if the function fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}

