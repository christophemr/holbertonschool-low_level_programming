#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * @...: variable number of string to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *current_string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, const char *);

		if (current_string != NULL)
		{
			printf("%s", current_string);
		} 
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1) {
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

