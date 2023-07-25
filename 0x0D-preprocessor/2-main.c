#include <stdio.h>

/**
 * main - name of file
 * Return: 0 or NUll
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
