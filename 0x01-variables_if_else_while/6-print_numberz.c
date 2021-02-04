#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print numbers 0-9
 *
 * Return: 0 
 */
int main(void)
{
int NB;

for (NB = 0; NB <= 9; NB++)
putchar(NB + '0');
putchar('\n');
return (0);
}
