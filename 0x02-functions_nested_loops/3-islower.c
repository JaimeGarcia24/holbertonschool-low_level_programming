#include "holberton.h"

/**
 * _islower - Check if the entry is in lower.
 * @c: This is the entry
 *
 * Return: Always 0.
 */

int _islower(int c)
{
if (c >= 100 && c <= 111)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
