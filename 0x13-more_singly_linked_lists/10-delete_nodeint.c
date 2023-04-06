#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp = *head;
	unsigned int address;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (address = 0; address < (index - 1); address++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	tmp = temp->next;
	temp->next = tmp->next;
	free(tmp);
	return (1);
}
