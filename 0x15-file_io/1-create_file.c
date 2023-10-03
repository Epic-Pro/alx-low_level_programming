#include "main.h"

/**
 * create_file - It creates a file. 
 * @filename: the name of created file 
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 if successful,  -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, w = 1, p = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (p = 0; text_content[p];)
			p++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, p);

	if (file == -1 || w == -1)
		return (-1);

	close(file);

	return (1);
}

