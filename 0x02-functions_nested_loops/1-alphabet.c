#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'm' to 'z'
 *
 * Return : void
 */
void print_alphabet(void)

{
	char c;

	for (c = 'm'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
