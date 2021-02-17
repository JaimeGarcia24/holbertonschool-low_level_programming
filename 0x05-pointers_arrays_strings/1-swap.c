#include "holberton.h"

/**
 * swap_int - This function exchanged the entry
 * @a: first entry
 * @b: second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
int barter;

barter = *a;
*a = *b;
*b = barter;
}
