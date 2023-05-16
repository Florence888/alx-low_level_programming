#include "main.h"
/**
 *_memcpy - this function copies memory area
 *@dest: particular memory where it is stored
 *@src: memory where it is copied
 *@n: total number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int j = n;


	for (; d < j; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
