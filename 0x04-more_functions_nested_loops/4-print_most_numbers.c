#include "main.h"


/**
 * print_most_numbers - prints the numbers from 0 to 9
 * description: prints the number excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)

{
	int c;

	for (; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar ('\n');
}
