#include "lists.h"

/**
 * free_listint - Freeing a link
 * @head: Freed list
 * Return: Always true or false
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
