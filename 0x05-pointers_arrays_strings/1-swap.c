/**
 * swap_int -swaps value of two integers a and b
 * @a: A pointer to an int that will be updated
 * @b: B pointer to an int that will be updated
 * Return: Nothing to return
 *
 */
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
