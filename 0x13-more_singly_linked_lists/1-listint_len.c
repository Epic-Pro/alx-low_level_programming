#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t list
 *
 * Return: number of nodes in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

