#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: 10 times
 */
void print_alphabet_x10(void)
{
int i;
int ch;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
