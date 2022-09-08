#include <stdio.h>

/**main- entrypoint
 * Description: sizes of the data types
 * Return: 0 as succes
 */
int main(void)
{
	printf("Size of a char: %ld byte(s) \n", sizeof(char));
	printf("Size of an int: %ld byte(s) \n", sizeof(int));
	printf("Size of a long int: %ld byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s) \n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s) \n", sizeof(float));

	return (0);

}
