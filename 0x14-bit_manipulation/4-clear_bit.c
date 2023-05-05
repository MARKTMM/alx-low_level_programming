#include "main.h"

/**
 * clear_bit - sets the value of a bit at a specified index to 0
 *
 * @num: A pointer to the unsigned long integer to change.
 * @idx: An unsigned integer representing the index of the bit to clear.
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *num, unsigned int idx)
{
	if (idx > 63)
	{
		return (-1);
	}

	*num = (~(1UL << idx) & *num);

	return (1);
}
