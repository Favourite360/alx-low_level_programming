#include "main.h"

/**
 * main - prints _putchar followed by a new line
 * Return:0 - Success
 */

int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
