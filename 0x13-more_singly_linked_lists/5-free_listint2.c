#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * @head : pointer to list
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tyre;

	if (head == NULL)
		return;
	while (*head)
	{
		tyre = *head;
		*head = (*head)->next;
		free(tyre);
	}
	head = NULL;
}
