#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	char c;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for  (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}

}
