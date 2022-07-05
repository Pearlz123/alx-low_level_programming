#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter, lowercase or uppercase
 * @c: lower or uppercase
 * Return: 1 or 0 if otherwise
 */
int _isalpha(int c)
{
return (c >= 'a' && c <= 'z' || c>= 'A' && c <= 'Z');
}
