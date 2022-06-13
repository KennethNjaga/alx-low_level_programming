#include "main.h"
/**
 * _puts -function that prints a string followed by a new line to stdout
 * @str: character string
 *
 * Return: Nothing to return
 */
void _puts(char *str)
{
char *x;
int y;

x = str;

for (y = 0; x[y]; y++)
{
_putchar(x[y]);
}
_putchar('\n');
}
