#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * at a given position
 * @head: pointer to the head of list
 * @idx: index of the list where the new node will be added
 * @n: the value of the new node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int address;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (address = 0; address < (idx - 1); address++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
