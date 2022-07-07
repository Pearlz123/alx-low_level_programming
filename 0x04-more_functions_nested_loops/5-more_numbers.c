#include "main.h"
/**
 * more_numbers - prints 0 to 14 10 times
 */
void more_numbers(void)
{
int b, i, m;
for (i = 0; i < 10; i++)
{
for (b = 0; b < 15; b++)
{
m = (b % 10) + '0';
_putchar(m);
if (b > 9)
_putchar(m);
}
_putchar('\n');
}
}
