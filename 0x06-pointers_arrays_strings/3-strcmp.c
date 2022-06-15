#include "main.h"
/**
 * _strcmp -compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Nothing to return
 */
int _strcmp(char *s1, char *s2)
{
char *str_uno = s1;
char *str_dos = s2;
while (*str_uno != '\0' && *str_dos != '\0' && *str_uno == *str_dos)
{
*str_uno++;
*str_dos++;
}
return (*str_uno - *str_dos);
}
