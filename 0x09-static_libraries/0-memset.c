#include "main.h"
/**
 * _memset - used to fill a block of memory with a particular value
 * @s: memory to be filled starting address
 * @d: the value that is desired
 * @n: number of bytes that will be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char d, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = d;
		n--;
	}
	return (s);
}
