#include "main.h"

/**
 * _puts - print string
 * @str: inputs string
 * Return: Return nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
