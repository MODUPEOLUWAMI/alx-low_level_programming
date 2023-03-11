#include "main.h"
#include <stdio.h>

/**
 * main - prints all arg content
 * @agrc: argument count
 * @agrv: argument vector
 *
 * return: 0
 */

int main(int agrc, char *agrv[])
{
	int i;

	for ( i = 0; i < agrc; i++)
	{
		printf("%s\n", agrv[i]);
	}
	return (0);
}
