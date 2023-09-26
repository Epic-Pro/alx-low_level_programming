#include "variadic_functions.h"

/**
 * print_strings - it prints strings, followed by a new line
 * @separator: separator between strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if(!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(strings);
}

