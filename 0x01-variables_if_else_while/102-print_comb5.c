#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 *
 * Return: 0
 */

int main(void)
{
int n1 = 48;
int a = 0;
int b;

while (a <= 99)
{
b = a + 1;
while (b <= 99)
{
putchar((a / 10) + n1);
putchar((a % 10) + n1);
putchar(32);
putchar((b / 10) + n1);
putchar((b % 10) + n1);
if (a != 98 || b != 99)
{
putchar(44);
putchar(32);
}
b += 1;
}
a += 1;
}
putchar('\n');
return (0);
}
