#include "lists.h"
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * Description: 0-print_listint.c
 * 
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
