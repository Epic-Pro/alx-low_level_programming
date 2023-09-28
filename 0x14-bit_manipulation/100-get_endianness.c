#include "main.h"

/**
 * get_endianness - A function that checks if endianness is big or small
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
