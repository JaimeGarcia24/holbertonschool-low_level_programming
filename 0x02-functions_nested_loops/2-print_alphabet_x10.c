#include "holberton.h"

/**
 * main - alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
int alp, boosts;

for (boosts = 1; boosts <= 10 ; boosts++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
