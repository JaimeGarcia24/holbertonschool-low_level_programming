#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
int a1 = 48;
int a2;
while (a1 <= 57)
{
a2 = a1 + 1;
while (a2 <= 57)
{
putchar(a1);
putchar(a2);
if (a1 != 56 || a2 != 57)
{
putchar(44);
putchar(32);
}
a2 += 1;
}
a1 += 1;
}
putchar('\n');
return (0);
}
