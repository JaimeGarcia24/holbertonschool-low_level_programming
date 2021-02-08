#include "holberton.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
int alphab;

for (alphab = 97; alphab <= 122; alphab++)
{
_putchar(alphab);
}
_putchar(10);
}
