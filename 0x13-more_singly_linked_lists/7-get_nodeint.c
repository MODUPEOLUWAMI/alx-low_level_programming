#include "lists.h"

/**
 *get_nodeint_at_index - finds a given node in alinked list
 * @head: pointer to the head of a linked list
 * @index: index of the node to find
 * Return: pointer tot he desired node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
