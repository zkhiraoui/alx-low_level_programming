#include "lists.h"

/**
 * struct listint_s - singly linked list
 * Description: 7-get-nodeint
 * 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}