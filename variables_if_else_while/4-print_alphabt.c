#include <stdio.h>

/**
 * main - entry point
 * Return: 0 on success
 */


int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}

