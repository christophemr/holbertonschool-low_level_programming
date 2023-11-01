#include "main.h"
#include <stdio.h>
/**
 * _puts - prints the string
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
