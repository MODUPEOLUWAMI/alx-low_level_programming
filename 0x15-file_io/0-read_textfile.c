#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: a pointer to the file
 * @letters: the number of letters the function
 * should read and print
 *
 * Return: if the function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, s, w;
	char *buffers;

	if (filename == NULL)
		return (0);

	buffers = malloc(sizeof(char) * letters);
	if (buffers == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	s = read(o, buffers, letters);
	w = write(STDOUT_FILENO, buffers, s);

	if (o == -1 || s == -1 || w == -1 || w != s)
	{
		free(buffers);
		return (0);
	}

	free(buffers);
	close(o);

	return (w);
}
