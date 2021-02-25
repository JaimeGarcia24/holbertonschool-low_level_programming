#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @s: string coming
 * Return: 0 when string is finished
 **/
void _puts_recursion(char *s)
{
int r = 0;

if (s[r] == '\0')
{
_putchar(10);
return;
}
_putchar (*s);
s++;
_puts_recursion(s);
}
