#include "lists.h"

/**
 * struct listint_s - singly linked list
 * Description: 8-sum
 * 
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
