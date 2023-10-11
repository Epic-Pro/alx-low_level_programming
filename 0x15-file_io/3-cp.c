#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define buffer_size 1024

/**
 * create_buffer - It allocates 1024 bytes to buffer.
 * @file: Name of the buffer
 *
 * Return: A pointer to the new buffer 
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - A function that closes descriptor .
 * @fd: The closed file descriptor. 
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can’t close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies file contents to another.
 * @argc: Number of arguments copied.
 * @argv: An array pointing to the arguments.
 *
 * Return: 0 if successful.
 *
 * Description: If arguments count is incorrect - exit code 97.
 *              If file_from don’t exist or not read - exit code 98.
 *              If file_to can’t be created or written to - exit code 99.
 *              If file_to or file_from can’t be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, op, rd, wt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wt = write(op, buffer, rd);
		if (op == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can’t write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		op = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(op);

	return (0);
}

