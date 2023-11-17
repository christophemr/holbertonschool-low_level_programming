#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, rslt;
	char *op;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	operation = get_op_func(op);


	if ((*op == '/' || *op == '%') && (num2 == 0 || operation == NULL))
			{
			printf("Error\n");
			if (operation == NULL)
			exit(99);
			else
			exit(100);
			}


			rslt = operation(num1, num2);
			printf("%d\n", rslt);

			return (0);
}
