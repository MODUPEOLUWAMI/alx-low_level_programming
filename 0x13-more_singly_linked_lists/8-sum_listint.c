#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculates the sum of all the data (n) of a linked lists
 * @head: pointer to the head of the list
 * Return: sum of all the data (n).
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
