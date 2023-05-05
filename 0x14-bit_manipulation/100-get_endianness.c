#include "main.h"

/**
 * get_endianness - checks whether the machine the code is running on is litt
 *
 * Return: An integer value indicating the endianness of the machine.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	return (*c);
}
