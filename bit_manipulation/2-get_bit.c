#include "main.h"

/**
 * get_bit - returns the value of a bit at
 * given index
 * @n: number for which to determine the value of the bit
 * @index: index starting from 0 of the bit targeted
 * Return: value of the bit at index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
