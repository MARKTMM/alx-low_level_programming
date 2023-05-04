#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index in a decimal
 *
 * @n: An unsigned long integer representing the decimal number to search.
 * @idx: An unsigned integer representing the index of bit return.less than 64.
 *
 * Return: If the index is invalid
 *          (i.e., greater than 63), the function returns -1.
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	int bit_val;

	if (idx > 63)
		return (-1);

	bit_val = (n >> idx) & 1;

	return (bit_val);
}
