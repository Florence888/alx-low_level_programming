#include "main.h"
/**
 * _strspn - Entry point
 * @c: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *c, char *accept)
{
	unsigned int n = 0;
	int d;


	while (*c)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*c == accept[d])
			{
				n++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (n);
		}
		c++;
	}
	return (n);
}
