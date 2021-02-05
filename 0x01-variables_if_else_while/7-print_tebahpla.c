#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Reverse alphabet
 *
 * Return: 0 for success
 */
int main(void)
{
char NB = 'a';

for (NB = 'z'; NB >= 'a'; NB--)
putchar(NB);

putchar('\n');

return (0);
}
