#include "holberton.h"

/**
 * print_rev - This function prints reverse
 *
 * @s: This is the new entry
 */
void print_rev(char *s)
{
int n, m;

for (n = 0; s[n] != '\0'; n++)
{
m = n;
}
for (; s[m] != '\0'; m--)
{
_putchar(s[m]);
}
_putchar('\n');
}
