#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign a random number to the variable n each time it is executed
* Return: prints 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d ls positive\n", n);
if (n == 0)
printf("%d ls zero\n", n);
if (n < 0)
printf("%d ls negative\n", n);
return (0);
}
