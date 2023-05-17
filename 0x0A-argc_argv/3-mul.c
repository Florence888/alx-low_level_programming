#include <stdio.h>
#include "main.h"

/**
 * _atoi - this converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int e, d, n, len, q, digit;

	e = 0;
	d = 0;
	n = 0;
	len = 0;
	q = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (e < len && q == 0)
	{
		if (s[e] == '-')
			++d;

		if (s[e] >= '0' && s[e] <= '9')
		{
			digit = s[e] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			q = 1;
			if (s[e + 1] < '0' || s[e + 1] > '9')
				break;
			q = 0;
		}
		e++;
	}

	if (q == 0)
		return (0);

	return (n);
}

/**
 * main - this will nmultiply two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
