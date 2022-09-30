#include <stdio.h>


/**
 * main- entrypoint
 * @argc: argument count
 * @argv: argument vector
 * Description: prints number of arguments to man
 *
 * Return: 0
 */





int main(int argc, char *argv[])
{
	int i;

	(void) argv;

	i = 0;
	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);

	return (0);
}
