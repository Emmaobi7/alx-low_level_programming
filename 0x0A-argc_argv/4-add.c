#include <stdio.h>
#include <ctype.h>

/**
 * main- entry point
 * @argc: argument count
 * @argv: argument vector
 * Description: prints sum of positive numbers
 *
 * Return: 1 on error
 */





int main(int argc, char *argv[])
{
	int i, x = 0;
	int j = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 1;

	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}

		}
		x += atoi(argv[i]);
		i++;
	}

	printf("%d\n", x);
	return (0);
}
