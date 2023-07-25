#include <stdio.h>

/**
 * main - Name of file
 * Return: 0 OR Null
 */

int main(void)
{
	const char *filename = __FILE__;

	while (*filename != '\0')
	{
		putchar(*filename);
		filename++;
	}
	putchar('\n');
	return (0);
}
