#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the elements of the list
 * @h: pointer to next element
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	int cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}
	return (cnt);

}