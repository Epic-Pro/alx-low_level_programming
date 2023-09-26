#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index index of a listint_t linked list
 * @head: A pointer to the first element in the listint_t list
 * @index: An index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}

