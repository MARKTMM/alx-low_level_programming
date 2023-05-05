#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets a bit at a given index in an unsigned long integer to 1.
 *
 * @num: A pointer to the unsigned long integer to change.
 * @idx: An unsigned integer representing the index of the bit to set to 1.
 *
 * Return: 1 on success, or -1 if an error occurred.
 */
int set_bit(unsigned long int *num, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*num = ((1UL << idx) | *num);
	return (1);
}
