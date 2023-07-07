#include <stdio.h>

/**
 * main - prints all args it gets
 * @argc: num. of command line args
 * @argv: array contains the program command line args
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
