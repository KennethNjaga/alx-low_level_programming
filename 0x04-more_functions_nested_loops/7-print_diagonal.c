#include "main.h"
/**
 * print_diagonal -print diagonal line
 * @n: print int
 * Return: Always 0(Success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
