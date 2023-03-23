#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calc the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: differnce btw a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calc the product of the integers
 * @a: the first
 * @b: the second
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calc the division btw a and b
 * @a: the first
 * @b: the second
 *
 * Return: the division btw a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calc the remainder btw the division of a and b
 * @a: the first
 * @b: the second
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
