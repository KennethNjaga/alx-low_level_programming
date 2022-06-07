#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character c
 *
 * Return: 1 if c is a lowercase or 0 otherwise
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
