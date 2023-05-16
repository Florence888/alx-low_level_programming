#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int e;


	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
	dest[d] = src[e];
	d++;
	e++;
	}
	dest[d] = '\0';
	return (dest);
}
