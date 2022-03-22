#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head of a node
 * Return: Always 0 if the list is empty or n.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmpr = *head;
	int n;

	if (!*head)
		return (0);
	n = tmpr->n;
	*head = (*head)->next;
	free(tmpr);
	return (n);
}
