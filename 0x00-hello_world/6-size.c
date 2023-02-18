#include <stdio.h>
/**
 * main - program to print the size of various computer type
 * Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

printf("size of a int: %1u byte(S)\n", (unsigned long)sizeof(a));
printf("size of a long int: %1u byte(S)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %1u byte(S)\n", (unsigned long)sizeof(c));
printf("size of a char: %1u byte(S)\n", (unsigned long)sizeof(d));
printf("size of a float: %1u byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
