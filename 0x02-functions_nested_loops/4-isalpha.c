#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character c
 *
 * Return: 1 if c is a lowercase or uppercase letter or 0 otherwise
 */
int _isalpha(int c)
{
{
if ('a' <= c && c <= 'z')
return (1);
return (0);
}
{
if ('A' <= c && c <= 'Z')
return (1);
return (0);
}
}
