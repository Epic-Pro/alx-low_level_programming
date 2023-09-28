#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: The number printed to represent a binary
 */
void print_binary(unsigned long int n)
{
	int p, Morris = 0;
	unsigned long int new;

	for (p = 63; p >= 0; p--)
	{
		new = n >> p;

		if (new & 1)
		{
			_putchar('1');
			Morris++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
