#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: function parameter
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
