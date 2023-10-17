#include <ctype.h>
#include "main.h"

/**
 * _islower - test for lowercase
 *
 * @c: character to be verified
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
