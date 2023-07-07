#include "main.h"

/**
 * _strncpy - copies two words
 * @dest : pointer to char params value
 * @src : pointer to char params value
 * @n : int params
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
