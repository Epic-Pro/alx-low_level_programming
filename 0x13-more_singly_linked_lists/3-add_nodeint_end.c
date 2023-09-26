#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of a linked_t list
 * @head: A pointer to the first element in the list
 * @n: The integer contained in the new element
 *
 * Return: The address of the new node, or NULL if the function fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;


	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

