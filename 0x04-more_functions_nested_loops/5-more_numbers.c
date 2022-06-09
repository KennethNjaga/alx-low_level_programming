#include "main.h"
/**
 * more_numbers -prints 10 times the numbers
 *
 * Return: Always 0(Success)
 */
void more_numbers(void)
{

int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
