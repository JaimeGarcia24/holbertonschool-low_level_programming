#include "holberton.h"

/**
 * _isalpha - check the the entry if is lower or upper
 *
 * @c: This is the entry
 * Return: Always 0.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
