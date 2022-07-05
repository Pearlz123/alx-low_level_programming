#include "main.h"
/**
 * print_last_digit - it prints the last digit
 * @n: parameter
 * Return: value
 */
int print_last_digit(int n)
{
int nac, lastdigit;
lastdigit = n % 10;
nac = lastdigit + 48;
_putchar(nac);
return (lastdigit);
}
