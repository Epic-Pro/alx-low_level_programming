#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The searched integer
 * @index: numbers of bit of index(s)
 * Return: The value of the bit 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int the_bit_value;
	
	if (index > 63)
		return (-1);
	the_bit_value = (n >> index) & 1;
	
	return (the_bit_value);
}
