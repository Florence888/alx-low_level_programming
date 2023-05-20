#include "main.h"
#include <stdlib.h>
/**
 * array_range - this creates an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: pointer to the newly created array.
 * if min > max, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int e;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (e = 0; min <= max; e++, min++)
		ar[e] = min;

	return (ar);
}
