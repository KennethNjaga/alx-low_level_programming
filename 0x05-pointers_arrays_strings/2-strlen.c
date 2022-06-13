#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: character s
 * Return: Nothing to return
 *
 */
int _strlen(char *s)
{
int y;

y = 0;

while (s[y] != '\0')
{
y++;
}
return (y);
}
