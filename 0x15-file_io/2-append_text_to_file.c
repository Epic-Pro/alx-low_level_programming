#include "main.h"
#include <string.h>
/**
 * append_text_to_file - it appends a text at the end of the file.
 * @filename: the name of the file 
 * @text_content: the text added at the end of the file.
 *
 * Return: 1 for success, -1 for failure or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	/* open file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);	
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* write text */
	w = write(fd, text_content, strlen(text_content));
	if (w == -1 || w != (int)strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

