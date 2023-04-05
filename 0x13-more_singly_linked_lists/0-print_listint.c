#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the lists
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t list = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		list += 1;
		cursor = cursor->next;
	}
	return (list);
}
