#include "3-calc.h"

/**
 * op_add - adds two no's
 * @a: first no
 * @b: second no
 *
 * Return: add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two no's
 * @a: first no
 * @b: second no
 *
 * Return: difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two no's
 * @a: first no
 * @b: second no
 *
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates module of two no
 * @a: first no
 * @b: second no
 *
 * Return: remainder of the division.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
