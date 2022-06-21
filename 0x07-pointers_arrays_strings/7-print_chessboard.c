#include "main.h"

/**

 * print_chessboard - print the chessboard, 2d array

 * @a: 2d array of chars

 *Return: void

 */

void print_chessboard(char (*a)[8])

{

	/*Declaring variables*/
<<<<<<< HEAD
int i, j;
i = 0;

while (i < 8) /*number repetitions*/
{
j = 0;

while (j < 8)
{
_putchar (a[i][j])
j++;
}
_putchar ('\n'); /*print new line*/
i++; /*add +1*/
}
=======

	int i, j;



	i = 0;

	while (i < 8) /*number repetitions*/

	{

		j = 0;

		while (j < 8)

		{

			_putchar (a[i][j]);

			j++;

		}

		_putchar ('\n'); /*print new line*/

		i++; /*add +1*/

	}

>>>>>>> 57488afb698113a8d62ab0f5b3abb55e7787c5d9
}
