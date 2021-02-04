#include <stdio.h>
/**
 * main - loop and conditional variables
 *
 * Return: 0
 */
int main(void)
{
char alphab;

for (alphab = 'a'; alphab <= 'z'; alphab++)
{
if (alphab != 'q' && alphab != 'e')
{
putchar(alphab);
}
}
putchar('\n');

return (0);
}
