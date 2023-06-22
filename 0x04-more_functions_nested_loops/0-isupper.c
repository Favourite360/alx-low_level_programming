#include "main.h"

/**
 * _isupper - checks character for uppercase
 * @c: int that will use for the argument of the function
 * Return: 1 if uppercase 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
