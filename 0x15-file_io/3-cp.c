#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "error_functions.h"
#define buffer_size 1024
/**
 * main - main
 * @argc: the number of arguments
 * @argv: points to the arguements array
 * Return : Always (0) for success
 */
 
void error_99(int p0, const char *buffer, const char *filename);
void error_100(int fd, const char *buffer);
void error_98(int p1, const char *buffer, const char *filename);

int main(int argc, char **argv)
{
	int p0, p1, read0, read1;
	char *buffer;
	
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	buffer = malloc(sizeof(char) * buffer_size);
	if (!buffer)
	return (0);

	p1 = open(argv[1], O_RDONLY);
	error_98(p1, buffer, argv[1]);
	p0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(p0, buffer, argv[2]);
	do {
		read0 = read(p1, buffer, buffer_size);
		if (read0 == 0)
			break;
		error_98(read0, buffer, argv[1]);
		read1 = write(p0, buffer, read0);
		error_99(read1, buffer, argv[2]);
	} while (read1 >= buffer_size);
	read0 = close(p0);
	error_100(read0, buffer);
	read0 = close(p1);
	error_100(read0, buffer);
	free(buffer);
	return (0);
}

