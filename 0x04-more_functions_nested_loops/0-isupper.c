#include "holberton.h"

/**
 * _isupper - checks if is an uppercase character.
 * @c: input character.
 * Return: 1 if is true, 0 if is false.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
