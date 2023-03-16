#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int a = 0, z = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[z])
	{
		z++;
	}

	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);

	while (a < z)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
