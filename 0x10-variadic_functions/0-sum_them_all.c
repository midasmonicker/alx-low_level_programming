#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds each argument
 * @n: argument to be added
 *
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);

	return (sum);
}
