#include "main.h"

/**
* _strspn - will get the length of prefix substring
* @s: String where substring will look
* @accept: Substring of accepted chars
* Return: Length occuring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
