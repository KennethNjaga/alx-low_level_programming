#include "main.h"
/**
 * _strncat -concatenates two strings
 * @src: string containing n bytes
 * @n: bytes
 * @dest: resulting string to be pointed
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
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
