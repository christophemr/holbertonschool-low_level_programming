#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: 0 on succes
 */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
