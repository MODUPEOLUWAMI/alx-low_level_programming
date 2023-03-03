#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{

g      int i;
g      int j;

g      i = 0;
g      while (dest[i] != '\0')
g      {
g              i++;
g      }
g      j = 0;
g      while (j < n && src[j] != '\0')
g      {
g              dest[i] = src[j];
g              i++;
g              j++;
g      }

g      dest[i] = '\0';
g       return (dest);
}
