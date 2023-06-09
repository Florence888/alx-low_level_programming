#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - this will return the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A particular variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int e, sum = 0;


	va_start(ap, n);


	for (e = 0; e < n; e++)
	sum += va_arg(ap, int);


	va_end(ap);


	return (sum);
}
