#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @agrc: argument count
 * @agrv: argument vector
 *
 * Return: 0
 */

int main(int agrc, char *agrv[])
{
	(void) agrv;
	printf("%d\n", agrc - 1);
	return (0);
}
