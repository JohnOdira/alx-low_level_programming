#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - Looks for a loop in a list
 * @head: Head of the list
 * Return: Gives address or NULL
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t * "j" = head;
	listint_t * "k" = head;

	if (!head)
		return (NULL);
	while (j && k && k->next)
	{
		k = k->next->next;
		j = j->next;
		if (k == j)
		{
			j = head;
			while (j != k)
			{
				j = j->next;
				k = k->next;
			}
			return (k);
		}
	}
	return (NULL);
}
