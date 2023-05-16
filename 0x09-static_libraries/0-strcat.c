#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * This code uses 'src' and 'dest' to give a result string ends with null
 *
 * Return: points resulting string
 */
char *_strcat(char *dest, char *src)
{
	int b = 0;
	int c = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	while (src[c] != '\0')

	{
		dest[b] = src[c];
		b++;
		c++;
	}

	dest[b] = '\0';
	return (dest);
}
