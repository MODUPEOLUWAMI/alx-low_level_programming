#include "main.h"

/**
 * factorial - Calculate the factorial of number
 * @n: the number to calculate the factorial
 *
 * Return: the value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}