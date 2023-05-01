#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the num to extract the last digit from
 * Return: value of the last digit of the num
 */

int print_last_digit(int n)

{

	int b;

	b = n % 10;
	if (b < 0)
	{
	b = b * -1;
	}
	_putchar(b + '0');

	return (b);
}

