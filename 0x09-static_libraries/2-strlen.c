#include "main.h"

/**
 * _strlen - shows length of string
 * @s: inputs char
 * Return: the length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
