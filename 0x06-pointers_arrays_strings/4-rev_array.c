#include "main.h"
/**
 * reverse_array -reverses the content of an array of integers
 * @a: integer a
 * @n: number of elements in array
 * Return: Nothing to return
 */
void reverse_array(int *a, int n)
{
int *start_x, *end_x, x;
int y;
start_x = a;
end_x = a;
for (y = 0; y < n - 1; y++)
{
end_x++;
}
for (y = 0; y < n / 2; y++)
{
x = *end_x;
*end_x = *start_x;
*start_x = x;
start_x++;
end_x--;
}
}
