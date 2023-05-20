#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this allocates memory for an array.
 * @nmemb: the number of elements.
 * @size: the size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(nmemb * size);

	if (b == NULL)
		return (NULL);

	for (e = 0; e < (nmemb * size); e++)
		b[e] = 0;

	return (b);
}
