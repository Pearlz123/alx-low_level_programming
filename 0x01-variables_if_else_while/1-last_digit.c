#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the value of n and tells if it is
 * Return: Always 0
 */
int main(void)
{
int n;
int lastdigit;
char msg[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit > 5)
printf("%s %d is %d and is greater than 5\n", msg, n, lastdigit);
else if (lastdigit == 0)
printf("%s %d is %d and is 0\n", msg, n, lastdigit);
else if (lastdigit < 6 && lastdigit != 0)
printf("%s %d is %d and is less than 6 and not 0\n", msg, n, lastdigit);
return (0);
}
