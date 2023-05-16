#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int e, n, j = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (n = 0; av[e][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
	for (n = 0; av[e][n]; n++)
	{
		str[j] = av[e][n];
		j++;
	}
	if (str[j] == '\0')
	{
		str[j++] = '\n';
	}
	}
return (str);
}

