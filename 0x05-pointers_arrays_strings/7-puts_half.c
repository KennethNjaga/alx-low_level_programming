#include "main.h"
/**
 * puts_half -prints half of a string, followed by a new line
 * @str: character string
 * Return: Nothing to return
 *
 */
void puts_half(char *str)
{
int y, last;

y = 0;
while (str[y] != '\0')
{
y++;
}
last = (y + 1) / 2;
for (y = last; str[y]; y++)
{
_putchar (str[y]);
}
_putchar ('\n');
}
