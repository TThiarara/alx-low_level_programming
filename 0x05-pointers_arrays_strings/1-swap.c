#include "main.h"

/*
 * swap_int - swaps two integer values
 * @a: variable 1
 * @b: variable 2
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
