#include "main.h"

/**
 * _pow_recursion - prints the output of x raised to the power of y
 * @x: the integer x
 * @y: the integer y to be raised
 *
 * Return: the value of x raised to the value of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
