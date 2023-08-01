#include "lists.h"

/**
 * struct listint_s - singly linked list
 * Description: 5-free_listint
 * 
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}