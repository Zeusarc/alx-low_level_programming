#include "main.h"

/**
 * swap_int - take in two variables and swap them
 * @a: stores adress of b after swap
 * @b: stores adress of a after swap
 * Return: always return 0
 */

void swap_int(int *a, int *b)
{
int hold;
hold = *b;
*b = *a;
*a = hold;
}
