#include <stdio.h>
#include <stdlib.h>

/**
 * main- entrybpoint
 * @argc: argument count
 * @argv: argument vector
 * Description: multiplies two numbers
 *
 * Return: 1 on fail
 */






int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

