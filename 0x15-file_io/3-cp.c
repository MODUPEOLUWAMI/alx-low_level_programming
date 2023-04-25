#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing characters for
 *
 * Return: a pointer
 */

char *create_buffer(char *file)
{
	char *buffers;

	buffers = malloc(sizeof(char) * 1024);

	if (buffers == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffers);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */

void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of one file to another file
 * @argc: the number of arguments
 * @argv: an array of pointers to the aruments
 *
 * Return: 0 on success
 *
 * Description: file 97, 98, 99, 100.
 *
 */

int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *buffers;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffers = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buffers, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read to %s\n", argv[1]);
					free(buffers);
					exit(98);
		}

		b = write(to, buffers, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read to %s\n", argv[2]);
			free(buffers);
			exit(99);
		}

		a = read(from, buffers, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buffers);
	close_file(from);
	close_file(to);

	return (0);
}

