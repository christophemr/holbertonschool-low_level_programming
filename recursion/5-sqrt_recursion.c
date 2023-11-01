#include "main.h"

/**
 * sqrt2 - evaluate from 1 to n
 * @i: same number as n
 * @j: number that iterates from 1 to n
 * Return: 1 on success -1 on error
 */
int sqrt2(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqrt2(i, j + 1));
}
/**
* _sqrt_recursion - return the square root of a number
* @n: number to calculate the square root
* Return: 1 on success -1 on error
*/

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
