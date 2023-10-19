#include <stdio.h>
#include "lists.h"

/**
* print_list - Gives the list
* @h: End of the list
*
* Return: Always number of nodes
*/

size_t print_list(const list_t *h)
{
	int p;

	if (h == NULL)
		return (0);
	for (p = 1; h->next != NULL; p++)
	{
		if (h->str == NULL)
		printf("[%u] %s\n", h->len, "(nil)");

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (p);

}
