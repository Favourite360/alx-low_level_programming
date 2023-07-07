#include "main.h"

/**
 * _memset - the memset - Program fills a block of memory with value
 * @s: pointer to char params - start address of memory to be filled
 * @b: data that will change - the desired value
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
