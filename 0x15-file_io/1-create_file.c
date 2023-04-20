#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: if the function falls - -1
 * otherwise - 1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, text = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text = 0; text_content[text];)
			text++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0000);
	w = write(o, text_content, text);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
