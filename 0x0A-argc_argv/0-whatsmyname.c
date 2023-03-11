#include "main.h"
#include <stdio.h>

/**
 * main - prints it name
 * @agrc: argument count
 * @agrv: argument vector
 *
 * Return: 0
 */
int main(int agrc, char *agrv[])
{
	(void) agrc;
	printf("%s\n", agrv[0]);

	return (0);
}
