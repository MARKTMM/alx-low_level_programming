#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number.
 *
 * @n: An unsigned long integer representing the decimal number to print in bi
 *
 * Return : anything, it simply prints the binary representation of the decimal
 * number to the console.
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int current;

	for (m = 63; m >= 0; m--)
	{
		current = n >> m;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
