#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the init segment
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
			if (*a++ == *s)
				return ((char *)s);
		++s;
	}
	return ('\0');
}
