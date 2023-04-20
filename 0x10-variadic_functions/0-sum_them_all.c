#include "variadic_functions.h"

/**
 * sum_them_all - Sums allits paramters
 * @n: Input value
 * Return: Always success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
