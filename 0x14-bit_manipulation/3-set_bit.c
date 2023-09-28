#include "main.h"

/**
 * set_bit - A function that sets a bit to 1 at a given index 
 * @n: A pointer to change a number
 * @index: An index that set a bit 1
 * Return: 1  if successful, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = ((1UL << index) | *n);
        return (1);
}

