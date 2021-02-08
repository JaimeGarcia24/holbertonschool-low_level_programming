#include "holberton.h"

/**
 * main - alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int Diez, alphab;

for (Diez = 0; Diez <= 9 ; Diez++)
{
for (alphab = 97; alphab <= 122; alphab++)
{
_putchar(alphab);
}
_putchar(10);
}
}
