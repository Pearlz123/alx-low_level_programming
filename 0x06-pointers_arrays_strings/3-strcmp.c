#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string
 * Return: 0 if equal, -15 if s1 < s2, 15 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
