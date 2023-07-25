#include "main.h"

/**
* malloc_checked - allocates memory -  process will terminate with status value of 98
* @b: allocated memory
*
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
