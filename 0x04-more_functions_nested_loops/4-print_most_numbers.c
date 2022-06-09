#include "main.h"
/**
 * print_most_numbers -prints numbers
 *
 * Return: Always 0(Success)
 */
void print_most_numbers(void)
{
int a;
a = 0;
while (a < 10)
	{
	if (a != 2 && a != 4)
	{
	_putchar(a + '0');
	}
	a++;
	}

_putchar('\n');
}
