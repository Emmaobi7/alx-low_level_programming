#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list- prints all elements of a lis
 * @h: pointer to first node
 *
 * Return: number of nodes
 */





size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
