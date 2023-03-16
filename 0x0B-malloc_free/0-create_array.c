#include "main.h"
#include <stdlib.h>

/*
 * create_array - creates the array
 * @size: the size of the array
 * @c: the characters in the array
 *
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(size * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}

	return (m);
}
