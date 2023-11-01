#include "main.h"

/**
 * prime2 - evaluate from 1 to n
 * @i: same number as n
 * @j: number that iterates from 1 to n
 * Return: 1 on success -1 on error
 */
int prime2(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime2(i, j + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: 1 on success -1 on error -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
