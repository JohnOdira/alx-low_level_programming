#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Free link
 * @h: Inputs the firts header
 * Return: Always 1
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t lists = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (h)
	{
		diff = *h - (*h)->next;
		if (difff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lists++;
		}

		else
		{
			free(*h);
			*h = NULL;
			lists++;
			break;
		}
	}

	*h = NULL;

	return (lists);
}
