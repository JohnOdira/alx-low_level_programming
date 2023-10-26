#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints a list
 * @h: The header of the list being printed
 * Return: the list
 */

size_t print_listint(const listint_t *h)

{
	size_t lists = 0;

	while (h)

	{
		prinf("%d\n", h->n);
		lists++;
		h = h->next;
	}

	return (lists);
}
