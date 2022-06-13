#include "main.h"
/**
 * print_rev -function that prints a string, in reverse, followed by a new line
 * @s: character string
 *
 * Return: Nothing to return
 */
void print_rev(char *s)
{
int y;

y = 0;
while (s[y] != '\0')
{
y++;
}
for (y = y - 1; y >= 0; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
