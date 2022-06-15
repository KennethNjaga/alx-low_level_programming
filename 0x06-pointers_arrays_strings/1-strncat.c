#include "main.h"
/**
 * _strncat -concatenates two strings
 * @src: string appended to dest
 * @n: bytes
 * @dest: resulting string to be pointed
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x, y;
x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
y++;
x++;
}
dest[x] = '\0';
return (dest);
}
