#include "main.h"

/**
 * flip_bits - returns the num of bits needed to
 * flip to get from one number to another
 * @n: number one
 * @m: number two
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipbit;

	for (flipbit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			flipbit++;
	}

	return (flipbit);

}
