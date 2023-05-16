#include "main.h"

/**
 * _isupper - for uppercase letters
 * @b: the char to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int b)
{
	if (b >= 'A' && b <= 'Z')
		return (1);
	else
		return (0);
}
