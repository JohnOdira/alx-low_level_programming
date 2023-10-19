#include "lists.h"

/**
 * list_len - Length
 * @h: Points node
 * Return: Number of pointer
 */

size_t list_len(const list_t *h);
{
	int p;

	if (h == NULL)
		return (0);

	for (p = 1; h->next != NULL; p++)
		h = h->next;
	return (p);
}
