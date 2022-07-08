#include <stdio.h>
#include "main.h"

/**
 * print_line - print lines
 *
 * @n: number of lines to be printed
 *
 * Return: 0
 */
void print_line(int n)

{
int i;
if (n > 0)
{
for (i = 1; 1 <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
