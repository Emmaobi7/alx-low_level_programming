#include <stdio.h>

/**
 * main- entrypoint
 * @argc: argument count
 * @argv: argument vector
 * Description: prints all its arguments
 * Return: 0
 */





int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
