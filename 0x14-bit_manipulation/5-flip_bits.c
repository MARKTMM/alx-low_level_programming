#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to convert it to another unsigned long integer.
 *
 * @num1: An unsigned long integer representing the first number.
 * @num2: An unsigned long integer representing the second number.
 *
 * Return: An unsigned integer value indicating the number of bits that need t
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int m, count = 0;
	unsigned long int current;
	unsigned long int exclusive = num1 ^ num2;

	for (m = 63; m >= 0; m--)
	{
		current = exclusive >> m;
		if (current & 1)
			count++;
	}

	return (count);
}
