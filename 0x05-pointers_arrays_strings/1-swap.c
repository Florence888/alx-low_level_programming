#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @c: integer to swap
 * @d: integer to swap
 */
void swap_int(int *c, int *d)
{
	int m;

	m = *c;
	*c = *d;
	*d = m;
}
