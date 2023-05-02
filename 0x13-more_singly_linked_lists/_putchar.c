#include <unistd.h>

/**
 * _putchar - wrts the chractr c to stdut
 * @c: The character to prnt
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set apropritely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
