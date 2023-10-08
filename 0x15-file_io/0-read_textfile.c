#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file then prints it
 * @filename: the read filename 
 * @letters: the number of letters that are read
 * Return: _write - for number of bytes read and printed, 0 if NULL or fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t _file;
	ssize_t _write;
	ssize_t _read;

	_file = open(filename, O_RDONLY);
	if (_file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	_read = read(_file, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	free(buffer);
	close(_file);
	return (_write);

}

