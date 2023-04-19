#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer.
 * @array: Array
 * @size: Size
 * @cmp: function of one of many
 * Return: Always (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
