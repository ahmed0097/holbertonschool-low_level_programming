#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - free list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
