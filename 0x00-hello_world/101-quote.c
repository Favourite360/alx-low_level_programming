#include <stdio.h>
#include <unistd.h>
/**
 * main - shall print out the last part of quote in the standard error.
 * Return: 1 as success.
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
