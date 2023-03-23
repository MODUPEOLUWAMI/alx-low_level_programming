#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array to iterate over
 * @size: the size of an array
 * @action:pointer to the function being used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
