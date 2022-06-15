#include "main.h"
/**
 * _strncpy -copies a string
 * @src: string to be used
 * @dest: string to be used
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;
x = 0;
while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
