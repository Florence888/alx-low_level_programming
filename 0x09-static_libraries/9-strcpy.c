#include "main.h"

/**
 * char *_strcpy - a function that copies the string that 'src' points to.
 * @dest: to copy to
 * @src: to copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;


	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
