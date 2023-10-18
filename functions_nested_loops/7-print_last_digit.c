#include "main.h"

/**
 *print_last_digit - print the last digit of a number
 *@i: number in the task
 *Return: return the value of last digit
 */

int print_last_digit(int i)
{

	if (i < 0)
		i = -i;

	i = i % 10;
		return (i);

}
