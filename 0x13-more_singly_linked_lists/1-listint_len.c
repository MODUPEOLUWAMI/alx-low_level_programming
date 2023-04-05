#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t listlen = 0;

	while (current != NULL)
	{
		listlen += 1;
		current = current->next;
	}
	return (listlen);
}
