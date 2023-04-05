#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element != NULL)
	{
		new_element->n = n;
		new_element->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_element->next = *head;
	*head = new_element;
	return (new_element);
}
