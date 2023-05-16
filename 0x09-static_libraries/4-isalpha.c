#include "main.h"

/**
 * _isalpha - checks for characters that are alphabets
 * @k: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int k)
{
	return ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'));
}
