#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet 10 times in lower case
 *
 * return: 0 on success
 */

void print_alphabet_x10(void)
{

	int k;
	int i;


	for (i = 0; i <= 9; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
	_putchar('\n');
	}
}

