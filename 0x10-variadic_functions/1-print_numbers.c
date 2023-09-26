#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of parameters 
 * @...: variable number of parameters to be printed.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, array;

	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		array = va_arg(pointer, const unsigned int);
		printf("%d", array);

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pointer);
}

