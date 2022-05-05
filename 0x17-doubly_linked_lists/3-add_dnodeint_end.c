#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: head of a list
 * @n: pointer
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	{
		new->n = n;
		new->next = NULL;
		if (*head != NULL)
		{
			tail = *head;
			while (tail->next)
				tail = tail->next;
			tail->next = new;
			return (*head);
		}
		*head = new;
		return (NULL);
	}
	return (new);
}
