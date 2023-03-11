#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of arg positive number
 * @agrc: argument count
 * @agrv: argument vector
 *
 * Return: 0
 */

int main(int agrc, char *agrv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (agrc > 1)
	{
		for (i = 1; i < agrc; i++)
		{
			e = agrv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
				return (1);
				}
			}
		sum += atoi(e);
		e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

