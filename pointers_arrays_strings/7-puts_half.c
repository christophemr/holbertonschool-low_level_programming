#include "main.h"

/**
 *puts_half - prints the second hlaf of the string
 *@str: string to print
 */

void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	n = (count - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
