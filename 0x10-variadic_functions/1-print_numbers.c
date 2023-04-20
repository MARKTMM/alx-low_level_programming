#include "variadic_functions.h"

/**
 * print_numbers - Fanction that prints numbers, followed by a new line.
 * @separator: separate
 * @n: Integer
 * @...: A number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myaps;

	if (separator == NULL)
		separator = "";

	va_start(myaps, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			printf("%d", va_arg(myaps, int));
		}
		else
		{
			printf("%d%s", va_arg(myaps, int), separator);
		}
	}
	printf("\n");

	va_end(myaps);
}
