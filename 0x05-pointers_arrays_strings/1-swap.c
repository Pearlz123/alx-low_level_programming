#include "main.h"

/**
 * swap_int -> swap the value of two integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the swap of the two values
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
