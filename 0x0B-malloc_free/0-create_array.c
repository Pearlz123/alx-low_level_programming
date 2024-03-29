#include "main.h"

/**
 * create_array -  creates an array of chars
 * @c: parameter 1
 * @size: size of array to be created
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
