#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 *
 * Return: 0
 */

int main(void)
{
int a1 = 48;
int a2, a3;

while (a1 <= 57)
{
a2 = a1 + 1;
while (a2 <= 57)
{
a3 = a2 + 1;
while (a3 <= 57)
{
putchar(a1);
putchar(a2);
putchar(a3);
if (a1 != 55 || a2 != 56 || a3 != 57)
{
putchar(44);
putchar(32);
}
a3 += 1;
}
a2 += 1;
}
a1 += 1;
}
putchar('\n');
return (0);
}
