#include "main.h"
#include <unistd.h>
/**
 * _putchar - A function that writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: If successful 1, -1 on error 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
