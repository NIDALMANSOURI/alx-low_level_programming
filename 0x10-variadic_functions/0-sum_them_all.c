#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of arguments
 * @...: arguments to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int s = 0, i = n;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}

