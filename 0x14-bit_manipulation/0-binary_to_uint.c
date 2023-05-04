#include "main.h"

/**
 * binary_to_uint - takes a string of binary digits as input and returns
 * an unsigned integer representing the decimal equivalent of the binary num.
 *
 * @param b: A pointer to a string of binary digits. It must not be null.
 *
 * @return: character other than '0' or '1',the function returns zero.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
	{
		return (0);
	}

	unsigned int dec_val = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
