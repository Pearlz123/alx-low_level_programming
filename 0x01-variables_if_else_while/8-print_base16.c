#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * Return:  returns 0 if successful
 */
int main(void)
{
int a;
char ch;
for (a = 48; a < 58; a++)
{
putchar(a);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

