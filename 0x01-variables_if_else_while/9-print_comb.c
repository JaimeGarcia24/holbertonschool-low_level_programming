#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Numbers comma
 * Return: 0
 */
int main(void)
{
int NBC;

for (NBC = 0; NBC <= 9; NBC++)
{
putchar(NBC + '0');
if (NBC != 9)
{
putchar(',');
putchar(32);
}
}
putchar('\n');
return (0);
}
