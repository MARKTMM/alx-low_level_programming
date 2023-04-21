#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that print  strings, followed by a new line.
 * @separator: Separate.
 * @n: Number.
 * @...: A number of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(args);
}
