#include "main.h"
/**
 * _isupper -checks for uppercase character
 * @c: character in uppercase
 *
 * Return: Always 1(Success) Otherwise 0 is returned
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
	return (0);
}
