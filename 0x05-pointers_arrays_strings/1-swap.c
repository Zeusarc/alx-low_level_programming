#include "main.h"

/*
 * swap_int - take in two variables and swap them
 * @a: stores adress of b after swap
 * @b: stores adress of a after swap
 * @swap: temporary stores value to be swapped
 * Return: always return 0
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *b;
*b = *a;
*a = swap;
}
