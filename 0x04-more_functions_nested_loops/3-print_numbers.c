#include "main.h"
/**
 * print_numbers -prints numbers 0 to 9
 * followed by a new line
 *
 * Return: Always 0(Success)
 */
void print_numbers(void)
{
int c;
int counter;
	for (counter = 0; counter < 10; counter++)
	{
		for (c >= '0'; c <= 10; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
