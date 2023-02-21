#include <stdio.h>
/**
 * main - program to print the size of various computer type
 * the computer it is complied and run on
 * Return: 0
 */

int main(void)

{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

printf("size of a int: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
