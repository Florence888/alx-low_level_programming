#include <stdlib.h>
#include "main.h"

/**
 * count_word - a helper function to count the number of words in a string
 * @s: particular string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, q, w;

	flag = 0;
	w = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow -to split a string into words
 * @str: particular string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, x = 0, len = 0, words, q = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (q)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (q + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[x] = tmp - q;
				x++;
				q = 0;
			}
		}
		else if (q++ == 0)
			start = i;
	}

	matrix[x] = NULL;

	return (matrix);
}
