#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main- entrypoint
 * @argc: no of command line argument
 * @argv: argument vector
 * Return: 0
 */





int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int res, num1, num2;

	if (argc == 4)
	{
		p = get_op_func(argv[2]);

		if (p == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		res = p(num1, num2);

		printf("%d\n", res);
	}
	else
	{
		printf("Error \n");
		exit(98);
	}

	return (0);
}
