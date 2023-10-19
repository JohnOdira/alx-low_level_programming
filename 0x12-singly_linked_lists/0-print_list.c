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
size_t p = 0;

while (h)

{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
p++;
}

return (p);
}
