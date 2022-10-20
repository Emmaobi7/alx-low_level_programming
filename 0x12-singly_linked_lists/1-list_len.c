#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len- finds no of elements in linked list
 * @h: first node
 * Return: number
 */





size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
