#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 for little
 * endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
