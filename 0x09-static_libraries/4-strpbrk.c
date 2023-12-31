#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes entry
 * @s: points to char
 * @accept: points to char
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
