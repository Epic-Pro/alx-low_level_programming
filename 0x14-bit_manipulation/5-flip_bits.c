#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would need to flip to get from one number to another
 * @n: the first number
 * @m: the ending number
 * Return: The number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, Morris = 0;
	unsigned long int previous;
	unsigned long int ex = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		previous = ex >> p;
		if (previous & 1)
			Morris++;
	}
	return (Morris);
}
