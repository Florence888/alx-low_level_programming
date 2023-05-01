#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the num to compute
 * Return: the absolute value of the num or 0
 */
int _abs(int n)

{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
