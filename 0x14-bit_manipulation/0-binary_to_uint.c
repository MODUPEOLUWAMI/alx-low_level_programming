#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * unsigned int
 * @b: the binary
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int length, basetwo;

	if (!b)
		return (0);

	binary = 0;

	for (length = 0; b[length] != '\0'; length++)
		;
	for (length--, basetwo = 1; length >= 0; length--, basetwo *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			binary += basetwo;
		}
	}
	return (binary);
}
