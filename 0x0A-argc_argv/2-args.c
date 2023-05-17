#include <stdio.h>
#include "main.h"

/**
 * main - this will print all arguments it receives
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
	{
		printf("%s\n", argv[e]);
	}

	return (0);
}
