#include "lists.h"

/**
 * struct listint_s - singly linked list
 * Description: 2-free-listint
 * 
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}