#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: The bit
 * @index: the index to get the value - indices start at 0
 *
 * Return: if an error occurs -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
