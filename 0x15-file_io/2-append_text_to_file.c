#include "main.h"

/**
 * append_text_to_file - it appends a text at the end of the file.
 * @filename: the name of the file 
 * @text_content: the text added at the end of the file.
 *
 * Return: 1 for success, -1 for failure or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, p = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (p = 0; text_content[p];)
			p++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, p);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

