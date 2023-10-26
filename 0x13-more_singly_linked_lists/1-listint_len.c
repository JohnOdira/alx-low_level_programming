#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Gives the lenth of a list
 * @h: Linked list
 * Return: Always 1
 */

size_t listint_len(const listint_t *h)

{
	size_t lists = 0;

	while (h)
	{
		lists++;
		h = h->next;
	}

	return (lists);
}
