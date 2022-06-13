#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: integer a
 *@n: number of elements
 *Return: Nothing to return
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

printf("\n")
;
}
