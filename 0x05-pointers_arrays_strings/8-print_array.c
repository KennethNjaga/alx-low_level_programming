#include "stdio.h"
#include <stdio.h>
/**
 * print_array -prints n elements of an array of integers
 * @a: integer a
 * @n: number of elements of the array to be printed
 * Return: Nothing to return
 *
 */
void print_array(int *a, int n)
{
int y;
y = 0;
while (y < n)
{
printf("%d", a[y]);
if (y < n - 1)
{
printf(", ");
}
y++;
}
printf('\n')
}
