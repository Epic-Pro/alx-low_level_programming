#include <unistd.h>

/**
 * _putchar - writes character c to stdout
<<<<<<< HEAD
 * @c: char to be printed
=======
 * @c: chat to be printed
>>>>>>> ebf262974f34308f9c901e3c786fcabcbd260db6
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
