#include <stdio.h>
#include "main.h"

/**
 * print_line - check for ckecks for a digit (0 through 9)
 * @n: n - Variable
 * Return: Always 0
 */
void print_line(int n)

{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar*('\n');
}
else
{
_putchar('\n');
}
}
