#include "main.h"
/**
 * print_last_digit - it prints the last digit
 * @n: parameter
 * Return: value
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
