#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print numbers (0-9)
 *
 * Return: 0
 */
int main(void)
{
char NB = '0';

for (NB = '0'; NB <= '9'; NB++)
putchar(NB);
putchar('\n');
return (0);
}
