#include <stdio.h>
#include <string.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero if exited otherwise
 */
int main(void)
{
printf("Size of a char: %li byte(s)\n", sizeof(char));
printf("Size of an int: %li bytes(s)\n", sizeof(int));
printf("Size of a long int: %li byte(s)\n", sizeof(long int));
printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
printf("Size of a float: %li byte(s)\n", sizeof(float));
return (0);
}
