#include "function_pointers.h"

/**
 * print_name - prints name in character
 * @name: name to print
 * @f: function pointer to the function that prints character
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
