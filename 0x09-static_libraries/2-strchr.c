#include "main.h"
/**
 * _strchr - Entry point
 * @w: input value
 * @k: input value
 * Return: Always 0 (Success)
 */
char *_strchr(char *w, char k)
{
	int e = 0;


	for (; w[e] >= '\0'; e++)
	{
		if (w[e] == k)
			return (&w[k]);
	}
	return (0);
}
