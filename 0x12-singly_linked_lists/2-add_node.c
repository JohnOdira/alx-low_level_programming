#include "lists.h"

int len(const char *str);
/**
 * add_node - Addition of node
 * @head: Points to start
 * @str: Strig value
 * Return: Always node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;

	else
	{
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;
	}
	return (*head);
}


/**
 * len - Give the length
 * @str: String value
 * Return: True value of string
 */

int len(const char *str)
{
	int p;

	if (str == NULL)
		return (0);
	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}
