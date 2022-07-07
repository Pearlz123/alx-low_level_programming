#include "main.h"

/**
 * print_line - draws a straight line
 * @n: drawing parameter
 * Return: straight line
 *
 */

void print_line(int n)
{
int a;
if (n <= 0)
{
_putchar('\n');
}
for (a = 0; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}

