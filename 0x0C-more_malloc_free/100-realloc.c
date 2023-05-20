#include "main.h"
#include <stdlib.h>
/**
 * _realloc - this reallocates a memory block.
 * @ptr: the pointer to the memory previously allocated.
 * @old_size: the size in bytes of the allocated space of ptr.
 * @new_size: the new size in bytes of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, return ptr without changes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}