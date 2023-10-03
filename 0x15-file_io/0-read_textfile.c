#include "main.h"
#include <stdlib.h>

/**
 * read_textfile: Reads a text file then prints it to the POSIX Standard Output
 * @filename: the read filename 
 * @letters: the number of letters that are read
 * Return: p - The number of bytes read and printed, 0 when if NULL or if it cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t s, p;

	fd = open(filename, O_RDONLY);
	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(fd, buf, letters);
	p = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(fd);
	return (p);
}

