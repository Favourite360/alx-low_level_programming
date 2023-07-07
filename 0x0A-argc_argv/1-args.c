#include <stdio.h>

/**
 * main - will print its name, and followed by a new line
 * @argc: no arguments
 * @argv: arr arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

