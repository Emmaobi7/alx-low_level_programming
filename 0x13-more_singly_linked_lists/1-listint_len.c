#include "lists.h"

/**
 * listint_len- counts n elments in list
 * @h: furst node
 * Return: positive number 
 */







size_t listint_len(const listint_t *h)
{
	unsigned int N_list;

	N_list = 0;
	while (h != NULL)
	{
		N_list++;
		h = h->next;
	}
	return(N_list);
}
