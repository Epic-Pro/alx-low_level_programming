#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the parameters in the function
 * @n: the number of arguments passed in the function
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list ap;

	va_start(ap,n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
		sum += va_arg(ap, const unsigned int);
		}
	}
	va_end(ap);
	return (sum);
}

