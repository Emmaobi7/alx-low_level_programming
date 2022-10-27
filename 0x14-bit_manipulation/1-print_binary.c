#include "main.h"

/**
 * printbit- prints in binary
 * @n: number
 * Return: nothing
 */



void printbit(unsigned long int n)
{
	if (n > 1)
		printbit(n >> 1);
	_putchar(n % 2 + '0');

}


/**
 * print_binary- prints binary equivalent
 * @n: number in decimal
 * Return: nothing
 */



void print_binary(unsigned long int n)
{
	printbit(n);
}
