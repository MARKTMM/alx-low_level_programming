#include "main.h"
/**
*_isupper - function verifies if character is uppercase or not
*@c: character tested
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
