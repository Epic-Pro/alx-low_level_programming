#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: chat to be printed
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
