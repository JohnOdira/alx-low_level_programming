#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Inputs a new node
 * @head: Head of the list
 * @n: New data for input
 * Return: True or False
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_data;


	new_data = malloc(sizeof(listint_t));
	if (!new_data)
		return (NULL);

	new_data->n = n;
	new_data->next = *head;
	*head = new_data;

	return (new_data);
}
