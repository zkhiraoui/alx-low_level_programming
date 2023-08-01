#include "lists.h"
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * Description: 1-listint_len.c
 * 
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}