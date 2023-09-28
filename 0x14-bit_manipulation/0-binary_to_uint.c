#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: A string containing the number
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int array;
	unsigned int p = 0;

	if (!b)
		return (0);
	for (array = 0; b[array]; array++)
	{
		if (b[array] < '0' || b[array] > '1')
			return (0);
		p = 2 * p + (b[array] - '0');
	}
	return (p);
}
