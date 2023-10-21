#include "main.h"

/**
 * print_line - prints line on the terminal
 * @n: number of times '_' will be printed
 * return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
	}
}
