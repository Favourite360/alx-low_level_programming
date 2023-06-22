#include <unistd.h>

/**
 * _putchar - writes the character c to stdout'
 * @c: prints character
 * Return: 1 if success
 * On error, -1 will return, & errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
